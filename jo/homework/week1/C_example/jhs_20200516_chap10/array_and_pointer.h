#pragma once
#include <stdio.h>
void calc_array(int len);
void array_name(int len);
void differ_pointer(int len);
void calc_pointer();
void print_ary(int* pa, int size);

void calc_array(int len) {
	
	int ary[sizeof(len)];
	int aryLen = sizeof(ary) / sizeof(int);
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf(" 배열 세번째 요소 키보드 입력 :");
	scanf_s("%d", ary + 2);

	for (i = 0; i < aryLen; i++)
	{
		printf("%5d", *(ary + i));
	}

	return;
}

void array_name(int len)
{
	int ary[sizeof(len)];
	int aryLen = sizeof(ary) / sizeof(int);
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < aryLen; i++)
	{
		printf("%5d", pa[i]);
	}

	return;
}

void differ_pointer(int len)
{
	int ary[sizeof(len)] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d", *pa);
		pa++;
	}

	return;
}

void calc_pointer()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary;
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pa : %u\n", pb);

	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);

	return;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", pa[i]);
	}

	return;
}

void input_ary(double* pa, int size)
{
	int i;
	printf("%d개의 실수값 입력 : ", size);

	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 0; i < size; i++)
	{
		if (pa[i] > max)
		{
			max = pa[i];
		}
	}

	return max;
}

