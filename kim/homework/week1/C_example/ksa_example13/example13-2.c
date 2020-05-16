#include <stdio.h>

int example2(void)
{
	int a = 10, b = 20;

	printf("교환 전 a: %d b: %d \n", a, b);
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}
	printf("교환 후 a: %d b: %d \n", a, b);

	return 0;
}