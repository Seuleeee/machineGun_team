#include <stdio.h>

int example5(void)
{
	int ch;

	while (1) {
		ch = fgetc(stdin);
		if (ch == EOF) {
			break;
		}
		fputc(ch, stdout);
	}
	return 0;
}