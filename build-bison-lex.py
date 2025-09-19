import subprocess
import sys
import os
import re

# Flags:
#  --bison-app-src <src>
#  --lex-app-src <src>
#  --bison-file <src>
#  --output-dir <dir>
#  --lex-file <src>
#  --set-prefix <name>
#  --ignore-bison-label <name>
#  --ignore-lex-label <name>

# Needs two files: --bison-file --lex-file
# Outputs 4 files based on --set-prefix
#  - <output-dir|./><prefix>.tab.c
#  - <output-dir|./><prefix>.tab.h
#  - <output-dir|./><prefix>.lex.c
#  - <output-dir|./><prefix>.lex.h

# Searches for most yy* labels and YY* constants, and substitute them
# with <prefix>* and <PREFIX>* respectively. If you want to ignore an label,
# use the options above to prevent them from being replaced.
#
# Behaves different from %define api.prefix {PREFIX} and %option prefix="PREFIX".
# In fact, when using this application, do not use the %define and %option to change
# prefixes. I didn't tested it, so expect unexpected behavior.

_PARAMS = {
	'--bison-app-src': ['bison.exe'],
	'--lex-app-src': ['lex.exe'],
	'--output-dir': ['./']
}

def param(key):
	ls = _PARAMS.get(key, [])
	if (key in _PARAMS and len(ls) > 0):
		return ls[-1]
	else:
		return None

def calculate_targets(data, mode):
	labels = []
	ignore_lex = _PARAMS.get('--ignore-lex-label', [])
	ignore_bis = _PARAMS.get('--ignore-bison-label', [])

	ls = re.findall('(yy|YY)[a-zA-Z_]+', data)
	for i, v in enumerate(ls):
		if (v not in labels):
			if ((mode == 'lex' and v not in ignore_lex) or (mode == 'bison' and v not in ignore_bis)):
				labels.append(v)

	return labels

def main():
	# Step 1: Read flags
	silent = '--silent' in sys.argv

	if (not silent):
		print('Step-1: Reading Input')
	key = None
	val = None
	args = list(sys.argv)
	for i, a in enumerate(args):
		if (a.startswith('--')):
			key = a
			_PARAMS[key] = _PARAMS.get(key, [])
		elif ((key is not None) and (key in _PARAMS)):
			# Doesn't add duplicates. Just set them as the newest value.
			try:
				idx = _PARAMS[key].index(a)
			except ValueError:
				pass
			else:
				_PARAMS[key].pop(idx)

			_PARAMS[key].append(a)
			key = None

	if ('--set-prefix' not in _PARAMS):
		print('ERROR: PREFIX not defined!')
		exit(0)

	if ('--bison-file' not in _PARAMS):
		print('ERROR: Bison script not defined!')
		exit(0)

	if ('--lex-file' not in _PARAMS):
		print('ERROR: Lex script not defined!')
		exit(0)

	# Step 2: Execute bison
	if (not silent):
		print('Step-2: Bison')
	bison_c_file = os.path.abspath(os.path.join(param('--output-dir'), param('--set-prefix')) + '.tab.c')
	bison_h_file = os.path.abspath(os.path.join(param('--output-dir'), param('--set-prefix')) + '.tab.h')
	subprocess.getoutput([param('--bison-app-src'), '-o', bison_c_file, ('--defines=%s' % bison_h_file), param('--bison-file')])

	# Step 3: Execute lex
	if (not silent):
		print('Step-3: Lex')
	lex_c_file = os.path.abspath(os.path.join(param('--output-dir'), param('--set-prefix')) + '.lex.c')
	lex_h_file = os.path.abspath(os.path.join(param('--output-dir'), param('--set-prefix')) + '.lex.h')
	subprocess.getoutput([param('--lex-app-src'), '-o', lex_c_file, ('--header-file=%s' % lex_h_file), param('--lex-file')])

	if (not silent):
		print('bison_c_file: ', bison_c_file)
		print('bison_h_file: ', bison_h_file)
		print('lex_c_file: ', lex_c_file)
		print('lex_h_file: ', lex_h_file)

	# Step 4: Search & Replace
	if (not silent):
		print('Step-4: Executing Search&Replace')

	prefix = param('--set-prefix')

	try:
		fp = open(bison_c_file, 'rb')
	except FileNotFoundError:
		print('ERROR: Could not Search&Replace bison C file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		targets = calculate_targets(data, "bison")
		for i, target in enumerate(targets):
			if (target.startswith('yy')):
				data = data.replace(target, prefix + target[2:])
			elif (target.startswith('YY')):
				data = data.replace(target, prefix.upper() + target[2:])
			else:
				data = data.replace(target, prefix + target)

		try:
			fp = open(bison_c_file, 'wb')
		except Exception as error:
			print('ERROR: Cannot save Search&Replace result over bison C file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()

	try:
		fp = open(bison_h_file, 'rb')
	except FileNotFoundError:
		print('ERROR: Could not Search&Replace bison Header file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		targets = calculate_targets(data, "bison")
		for i, target in enumerate(targets):
			if (target.startswith('yy')):
				data = data.replace(target, prefix + target[2:])
			elif (target.startswith('YY')):
				data = data.replace(target, prefix.upper() + target[2:])
			else:
				data = data.replace(target, prefix + target)

		try:
			fp = open(bison_h_file, 'wb')
		except Exception as error:
			print('ERROR: Cannot save Search&Replace result over bison Header file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()

	try:
		fp = open(lex_c_file, 'rb')
	except FileNotFoundError:
		print('ERROR: Could not Search&Replace lex C file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		targets = calculate_targets(data, "lex")
		for i, target in enumerate(targets):
			if (target.startswith('yy')):
				data = data.replace(target, prefix + target[2:])
			elif (target.startswith('YY')):
				data = data.replace(target, prefix.upper() + target[2:])
			else:
				data = data.replace(target, prefix + target)

		try:
			fp = open(lex_c_file, 'wb')
		except Exception as error:
			print('ERROR: Cannot save Search&Replace result over lex C file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()

	try:
		fp = open(lex_h_file, 'rb')
	except FileNotFoundError:
		print('ERROR: Could not Search&Replace lex Header file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		targets = calculate_targets(data, "lex")
		for i, target in enumerate(targets):
			if (target.startswith('yy')):
				data = data.replace(target, prefix + target[2:])
			elif (target.startswith('YY')):
				data = data.replace(target, prefix.upper() + target[2:])
			else:
				data = data.replace(target, prefix + target)

		try:
			fp = open(lex_h_file, 'wb')
		except Exception as error:
			print('ERROR: Cannot save Search&Replace result over lex Header file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()

if __name__ == '__main__':
	main()
