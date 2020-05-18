#include <stdio.h>

void assign(void) {
	int a;
	a = 10;
	printf("assign 함수 a: %d\n", a);
}

int example1(void)
{
	auto int a = 0;

	assign();
	printf("assign 함수 a: %d\n", a);

	return 0;
}