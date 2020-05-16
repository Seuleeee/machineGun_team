#include <stdio.h>

int example3(void)
{
	int ch;

	ch = getchar();
	printf("입력 문자: ");
	putchar(ch);
	putchar('\n');
	return 0;
}