#include <stdio.h>

int example5(void)
{
	int res;
	char ch;

	while (1) {
		res = scanf("%c", &ch);
		if (res == -1)break;
		printf("%d ", ch);
	}
	return 0;
}