#include <stdio.h>

void print_arr(int* pa, int size) {
	int i;

	for (i = 0; i < size; i++) {
		printf("%d ", pa[i]);
	}
}

int example6(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_arr(ary1, 5);
	printf("\n");
	print_arr(ary2, 7);
}