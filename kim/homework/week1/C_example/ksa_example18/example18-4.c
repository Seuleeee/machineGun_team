#include <stdio.h>

int example4(void)
{
	int ch;

	while (1) {
		ch = getchar();
		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}
	return 0;
}