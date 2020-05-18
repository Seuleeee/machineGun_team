#include <stdio.h>

int example3(void)
{
	FILE* fp;
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w");
	if (fp == NULL) {
		printf("failed to create file.\n");
		return 1;
	}
	i = 0;
	while (str[i]!='\0') {
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}