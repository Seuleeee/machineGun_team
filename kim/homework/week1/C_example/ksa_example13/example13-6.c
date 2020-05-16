#include <stdio.h>

void add_ten(int a) {
	a += 10;
}

int example6(void)
{
	int a = 10;

	add_ten(a);
	printf("a : %d\n", a);

	return 0;
}