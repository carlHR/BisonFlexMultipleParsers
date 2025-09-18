import subprocess
import sys
import os

# Compiling Eval:
# python build-bison-lex.py --set-prefix "eval" --output-dir "eval" --bison-file "eval/eval.y" --lex-file "eval/eval.l"

# Flags:
#  --bison-app-src <src>
#  --lex-app-src <src>
#  --bison-file <src>
#  --output-dir <dir>
#  --lex-file <src>
#  --set-prefix <name>
#  --add-bison-label <name>
#  --add-lex-label <name>
#  --add-label <name>
#  --ignore-bison-label <name>
#  --ignore-lex-label <name>
#  --ignore-label <name>

# Needs two files: --bison-file --lex-file
# Outputs 4 files based on --set-prefix
#  - <output-dir|./><prefix>.tab.c
#  - <output-dir|./><prefix>.tab.h
#  - <output-dir|./><prefix>.lex.c
#  - <output-dir|./><prefix>.lex.h

# Searches for most yy* labels and YY* constants, and substitute them
# with <prefix>* and <PREFIX>* respectively.

# Global variables also get the prefix.

_PARAMS = {
	'--bison-app-src': ['bison.exe'],
	'--lex-app-src': ['lex.exe'],
	'--add-label': [],
	'--ignore-label': [],
	'--output-dir': ['./']
}

_LEX_LABELS = ['yy_create_buffer', 'yy_delete_buffer', 'yy_flex_debug', 'yy_init_buffer', 'yy_flush_buffer', 'yy_load_buffer_state', 'yy_switch_to_buffer', 'yyin', 'yyleng', 'yylex', 'yylineno', 'yyout', 'yyrestart', 'yytext', 'yywrap', 'yyalloc', 'yyrealloc', 'yyfree']
_BISON_LABELS = ['yyparse', 'yylex', 'yyerror', 'yynerrs', 'yylval', 'yylloc', 'yychar', 'yydebug', 'yypush_parse', 'yypull_parse', 'yypstate', 'yypstate_new', 'yypstate_delete', 'YYSTYPE', 'YYLTYPE', 'YYDEBUG']

def param(key):
	ls = _PARAMS.get(key, [])
	if (key in _PARAMS and len(ls) > 0):
		return ls[-1]
	else:
		return None

def main():
	# Step 1: Read flags
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

	print(_PARAMS)
	if ('--set-prefix' not in _PARAMS):
		print('PREFIX not defined!')
		exit(0)

	if ('--bison-file' not in _PARAMS):
		print('Bison script not defined!')
		exit(0)

	if ('--lex-file' not in _PARAMS):
		print('Lex script not defined!')
		exit(0)

	# Step 2: Execute bison
	print('Step-2: Bison')
	bison_c_file = (os.path.join(param('--output-dir'), param('--set-prefix')) + '.tab.c')
	bison_h_file = (os.path.join(param('--output-dir'), param('--set-prefix')) + '.tab.h')
	subprocess.getoutput([param('--bison-app-src'), '-o', bison_c_file, ('--defines=%s' % bison_h_file), param('--bison-file')])

	# Step 3: Execute lex
	print('Step-3: Lex')
	lex_c_file = (os.path.join(param('--output-dir'), param('--set-prefix')) + '.lex.c')
	lex_h_file = (os.path.join(param('--output-dir'), param('--set-prefix')) + '.lex.h')
	subprocess.getoutput([param('--lex-app-src'), '-o', lex_c_file, ('--header-file=%s' % lex_h_file), param('--lex-file')])

	# Step 4: Calculate target labels to replace with prefix.
	print('Step-4: Calculating Search&Replace Targets')
	for _, l in enumerate(_PARAMS.get('--add-label', [])):
		if (l not in _BISON_LABELS):
			_BISON_LABELS.append(l)

		if (l not in _LEX_LABELS):
			_LEX_LABELS.append(l)

	for _, l in enumerate(_PARAMS.get('--add-bison-label', [])):
		if (l not in _BISON_LABELS):
			_BISON_LABELS.append(l)

	for _, l in enumerate(_PARAMS.get('--add-lex-label', [])):
		if (l not in _LEX_LABELS):
			_LEX_LABELS.append(l)

	for _, l in enumerate(_PARAMS.get('--ignore-label', [])):
		try:
			idx = _BISON_LABELS.index(l)
		except ValueError:
			pass
		else:
			_BISON_LABELS.pop(idx)

		try:
			idx = _LEX_LABELS.index(l)
		except ValueError:
			pass
		else:
			_LEX_LABELS.pop(idx)

	for _, l in enumerate(_PARAMS.get('--ignore-bison-label', [])):
		try:
			idx = _BISON_LABELS.index(l)
		except ValueError:
			pass
		else:
			_BISON_LABELS.pop(idx)

	for _, l in enumerate(_PARAMS.get('--ignore-lex-label', [])):
		try:
			idx = _LEX_LABELS.index(l)
		except ValueError:
			pass
		else:
			_LEX_LABELS.pop(idx)

	# Step 5: Search & Replace
	#
	# Labels replaced automatically from bison
	#  - yyparse
	#  - yylex
	#  - yyerror
	#  - yynerrs
	#  - yylval
	#  - yylloc
	#  - yychar
	#  - yydebug
	#  - yypush_parse
	#  - yypull_parse
	#  - yypstate
	#  - yypstate_new
	#  - yypstate_delete
	#  - YYSTYPE
	#  - YYLTYPE
	#  - YYDEBUG
	#
	# Labels replaced automatically from lex
	#  - yy_create_buffer
	#  - yy_delete_buffer
	#  - yy_flex_debug
	#  - yy_init_buffer
	#  - yy_flush_buffer
	#  - yy_load_buffer_state
	#  - yy_switch_to_buffer
	#  - yyin
	#  - yyleng
	#  - yylex
	#  - yylineno
	#  - yyout
	#  - yyrestart
	#  - yytext
	#  - yywrap
	#  - yyalloc
	#  - yyrealloc
	#  - yyfree
	print('Step-5: Executing Search&Replace')

	prefix = param('--set-prefix')

	try:
		fp = open(bison_c_file, 'rb')
	except FileNotFoundError:
		print('Could not Search&Replace bison C file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		for _, label in enumerate(_BISON_LABELS):
			if (label.startswith('yy')):
				data = data.replace(label, prefix + label[2:])
			elif (label.startswith('YY')):
				data = data.replace(label, prefix.upper() + label[2:])
			else:
				data = data.replace(label, prefix + label)

		try:
			fp = open(bison_c_file, 'wb')
		except Exception as error:
			print('Cannot save Search&Replace result over bison C file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()

	try:
		fp = open(bison_h_file, 'rb')
	except FileNotFoundError:
		print('Could not Search&Replace bison Header file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		for _, label in enumerate(_BISON_LABELS):
			if (label.startswith('yy')):
				data = data.replace(label, prefix + label[2:])
			elif (label.startswith('YY')):
				data = data.replace(label, prefix.upper() + label[2:])
			else:
				data = data.replace(label, prefix + label)

		try:
			fp = open(bison_h_file, 'wb')
		except Exception as error:
			print('Cannot save Search&Replace result over bison Header file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()

	try:
		fp = open(lex_c_file, 'rb')
	except FileNotFoundError:
		print('Could not Search&Replace lex C file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		for _, label in enumerate(_LEX_LABELS):
			if (label.startswith('yy')):
				data = data.replace(label, prefix + label[2:])
			elif (label.startswith('YY')):
				data = data.replace(label, prefix.upper() + label[2:])
			else:
				data = data.replace(label, prefix + label)

		try:
			fp = open(lex_c_file, 'wb')
		except Exception as error:
			print('Cannot save Search&Replace result over lex C file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()

	try:
		fp = open(lex_h_file, 'rb')
	except FileNotFoundError:
		print('Could not Search&Replace lex Header file output: File not found error.')
	else:
		data = fp.read().decode('utf-8')
		fp.close()

		for _, label in enumerate(_LEX_LABELS):
			if (label.startswith('yy')):
				data = data.replace(label, prefix + label[2:])
			elif (label.startswith('YY')):
				data = data.replace(label, prefix.upper() + label[2:])
			else:
				data = data.replace(label, prefix + label)

		try:
			fp = open(lex_h_file, 'wb')
		except Exception as error:
			print('Cannot save Search&Replace result over lex Header file: ', error)
		else:
			fp.write(data.encode('utf-8'))
			fp.close()


	# Step 6: Search and replace global variables, if any.
	# TBD. For now, you'll have to do this by yourself.

if __name__ == '__main__':
	main()
