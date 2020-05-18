#include <stdio.h>

int example7(void)
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}