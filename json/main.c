#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "json.h"
#if !YYDEBUG
	static int yydebug;
#endif

/*
	Original Example from this SO answer: https://stackoverflow.com/a/48879103/14956120
	Anything inside this folder can be executed by running the batch file on windows (msys2)
	then executing app.exe
*/

int main(int argc, char* argv[]) {
	FILE *fp;
	char *fdata;
	int flen;
	YY_BUFFER_STATE buffer;

	if (argc < 2) {
		printf("Needs at least one argument. Must be a filename.\n");
		return 1;
	}

	fp = fopen(argv[1], "rb");
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

	yyscan_t scanner;
	yylex_init(&scanner);

	buffer = yy_scan_bytes(fdata, flen, scanner);
	if (yyparse(scanner) == 0) {
		printf("Yes this is a json file!\n");
	} else {
		printf("Not a json file...\n");
	}

	yy_delete_buffer(buffer, scanner);
	yylex_destroy(scanner);

	free(fdata);
	fdata = NULL;

	return 0;
}
