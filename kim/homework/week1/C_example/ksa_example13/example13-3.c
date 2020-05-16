#include <stdio.h>

int a;

void assign10(void) {
	a = 10;
}

void assgin20(void) {
	int a;

	a = 20;
}

int example3(void)
{
	printf("함수 호출 전 a 값: %d\n", a);

	assign10();
	assgin20();

	printf("함수 호출 후 a 값: %d\n", a);
	
	return 0;
}