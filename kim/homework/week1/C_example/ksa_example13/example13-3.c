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
	printf("�Լ� ȣ�� �� a ��: %d\n", a);

	assign10();
	assgin20();

	printf("�Լ� ȣ�� �� a ��: %d\n", a);
	
	return 0;
}