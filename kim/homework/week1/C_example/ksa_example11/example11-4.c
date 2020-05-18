#include <stdio.h>

int example4(void)
{
	char ch;
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%c", &ch);
		printf("%c", ch);
	}
	return 0;
}