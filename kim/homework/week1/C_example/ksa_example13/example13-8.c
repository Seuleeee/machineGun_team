#include <stdio.h>

void *sum(int a, int b) {
	static int res;

	res = a + b;

	return &res;
}

int example8(void)
{
	int *resp;

	resp = sum(10, 20);
	printf("гу : %d\n", *resp);

	return 0;
}