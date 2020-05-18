#include <stdio.h>

int example1(void)
{
	FILE* fp;
	fp = fopen("a.txt", "r");
	if (fp == NULL) {
		printf("there is no file.\n");
		return 1;
	}
	printf("file has opend.\n");
	fclose(fp);

	return 0;
}