#include <stdio.h>

int example2(void)
{
	int a = 10, b = 20;

	printf("��ȯ �� a: %d b: %d \n", a, b);
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}
	printf("��ȯ �� a: %d b: %d \n", a, b);

	return 0;
}