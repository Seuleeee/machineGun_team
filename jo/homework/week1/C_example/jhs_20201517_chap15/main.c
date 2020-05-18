#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_ptr(char** ppa, char** ppb);
void print_str(char** pps, int cnt);
void print_ary(int(*pa)[4]);
void func(int (*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);

int main(void)
{
	//15-1
	/*int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;
	printf("--------------------------------------------\n");
	printf("변수    변숫값     &연산     *연산    **연산\n");
	printf("--------------------------------------------\n");
	printf("   a%10d%10u\n", a, &a);
	printf("  pi%10u%10u%10d\n", pi, &pi, *pi);
	printf(" ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("--------------------------------------------\n");*/

	//15-2
	/*char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);*/

	//15-3
	/*char* ptr_ary[] = { "cat", "dog", "lion", "giants" };
	int count;
	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);*/

	//15-4
	/*int ary[5];
	printf("ary :%u\t", ary);
	printf("&ary :%u\t", &ary);
	printf("ary+1 :%u\t", ary+1);
	printf("&ary+1 :%u\t", &ary+1);*/

	//15-5
	/*int ary[3][4] = {
		{1,2,3,4},
		{11,12,13,14},
		{21,22,23,24},
	};
	int(*pa)[4];
	int i, j;
	pa = ary;
	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}*/

	//15-6
	/*int ary[3][4] = {
		{1,2,3,4},
		{11,12,13,14},
		{21,22,23,24},
	};
	print_ary(ary);*/

	//15-7
	/*int (*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("res : %d\n", res);*/

	//15-8
	/*int sel;
	printf("합 : \n");
	printf("곱 : \n");
	printf("큰값 : \n");
	printf("원하는 연산을 선택해 : \n");
	scanf_s("%d", &sel);

	switch (sel)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
		break;
	}*/

	//15-9
	int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);
	vp = &b;
	printf("a : %.1lf\n", *(double*)vp);

	return 0;
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

void print_str(char **pps, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}

}

void print_ary(int (*pa)[4])
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
}

void func(int (*fp)(int, int))
{
	int a, b;
	int res;
	printf("두 정수의 값을 입력하세요. : ");
	scanf_s("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과 : %d\n", res);
}

int sum(int a, int b)
{
	return (a + b);
}

int mul(int a, int b)
{
	return (a * b);
}

int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}	
}
