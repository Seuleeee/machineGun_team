#pragma once
#include <stdio.h>

void find_addr(int a, double b, char* c)
{
	printf("int�� ���� �ּ� %u\n", &a);
	printf("double�� ���� �ּ� %u\n", &b);
	printf("char�� ���� �ּ� %u\n", *(&c));

	return;
}