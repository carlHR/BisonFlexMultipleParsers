#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include "eval.h"
#include "json.h"
#if !EVALDEBUG
  static int evaldebug;
#endif

bool cmp(char *a, char *b) {
	int la, lb;

	for (int i = 0; i < 4096; ++i) {
		if (a[i] == '\0') {
			la = i;
			break;
		}
	}

	for (int i = 0; i < 4096; ++i) {
		if (b[i] == '\0') {
			lb = i;
			break;
		}
	}

	if (la == lb && memcmp(a, b, la) == 0) {
		return true;
	} else {
		return false;
	}
}

int eval_main(int argc, char *argv[]) {
	evalscan_t scanner;
	evallex_init(&scanner);

	do {
		switch (getopt(argc, argv, "sp")) {
			case -1: break;
			case 's': evalset_debug(1, scanner); continue;
			case 'p': evaldebug = 1; continue;
			default: exit(1);
		}
		break;
	} while(1);

	evalparse(scanner);
	evallex_destroy(scanner);
	return 0;
}

int json_main(int argc, char *argv[]) {
	FILE *fp;
	char *fdata;
	int flen;
	JSON_BUFFER_STATE buffer;

	if (argc < 3) {
		printf("Needs at least two arguments: json <filename>. The second must be a filename.\n");
		return 1;
	}

	fp = fopen(argv[2], "rb");
	if (fp == NULL) {
		printf("File not found error.\n");
		return 1;
	}

	fseek(fp, 0, SEEK_END);
	flen = (int) ftell(fp);
	fseek(fp, 0, SEEK_SET);

	fdata = malloc(flen+1); if (fdata == NULL) exit(1);
	memset(fdata, '\0', flen+1);
	if (fread(fdata, flen, 1, fp) != 1) {
		printf("Failed reading anything... Size expected: %d\n", flen);
		return 1;
	} else {
		printf("File has %d characters. Text content is: `%s`\n", flen, fdata);
	}

	fclose(fp); fp = NULL;

	evalscan_t scanner;
	jsonlex_init(&scanner);

	buffer = json_scan_bytes(fdata, flen, scanner);
	if (jsonparse(scanner) == 0) {
		printf("Yes this is a json file!\n");
	} else {
		printf("Not a json file...\n");
	}

	json_delete_buffer(buffer, scanner);
	jsonlex_destroy(scanner);

	free(fdata);
	fdata = NULL;
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Arguments necessary is 1 or 2.\n - <mode> [<filename>]\nModes are:\n - json <filename>: to load a json file and check its syntax.\n - eval: to load the eval app.\n");
		return 0;
	}

	if (cmp(argv[1], "eval")) {
		return eval_main(argc, argv);
	} else if (cmp(argv[1], "json")) {
		return json_main(argc, argv);
	}
}
