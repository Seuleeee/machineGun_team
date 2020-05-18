#include <stdio.h>

int example2(void)
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("there is no file.\n");
		return 1;
	}
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}
	fclose(fp);

	return 0;
}