#pragma once
#include <stdio.h>

void find_addr(int a, double b, char* c)
{
	printf("int형 변수 주소 %u\n", &a);
	printf("double형 변수 주소 %u\n", &b);
	printf("char형 변수 주소 %u\n", *(&c));

	return;
}