#include <stdio.h>

int example3(void)
{
	int ary[3] = { 10,20,30 };
	int* pa = ary;
	int i;

	printf("배열의 값: ");
	for (i = 0; i < 3; i++) {
		printf("%d ", *pa);
		pa++;
	}
}