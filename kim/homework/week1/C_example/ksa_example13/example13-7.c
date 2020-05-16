#include <stdio.h>

void add_tenp(int *pa) {
	*pa += 10;
}

int example7(void)
{
	int a = 10;

	add_tenp(&a);
	printf("a : %d\n", a);

	return 0;
}