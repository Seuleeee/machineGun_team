#include<stdio.h>

/*
int main() {
	int a = 10;
	int *pi;
	int **ppi;

	pi = &a;
	ppi = &pi;

	printf("--------------------------------------------\n");
	printf("변수	변숫값		&연산	*연산	**연산\n");
	printf("--------------------------------------------\n");
	printf(" a%10d%10u\n", a, &a);
	printf("pi%10u&10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("--------------------------------------------\n");

	return 0;
}*/

/*
void swap_ptr(char **ppa, char **ppb);
int main()
{
	char *pa = "success";
	char *pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}
void swap_ptr(char **ppa, char **ppb)
{
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}*/

/*
void  print_str(char **pps, int cnt);
int main()
{
	char *ptr_arr[] = { "eagle","tiger","lion","squirrel" };
	int count;

	count = sizeof(ptr_arr) / sizeof(ptr_arr[0]);
	print_str(ptr_arr, count);

	return 0;
}
void print_str(char **pps, int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}*/

/*
int main()
{
	int arr[5];
	printf(" arr의 값 : %u\t", arr);
	printf("arr의 주소 : %u\n", &arr);
	printf(" arr+1 : %u\t", arr + 1); //값은 4차이
	printf(" &arr+1 : %u\n", &arr + 1); //주소 20차이 arr[5] 4*5=20

	return 0;
}*/

/*
int main()
{
	int arr[3][4] = { {1,2,3,4},{5,6,7,8},{1,2,3,4} };
	int(*pa)[4];
	int i, j;

	pa = arr;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

/*
void print_arr(int(*)[4]);
int main()
{
	int arr[3][4] = { {1,2,3,4},{1,2,3,4},{5,6,7,8} };
	print_arr(arr);
	return 0;
}
void print_arr(int(*pa)[4])
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
}*/

/*
int sum(int, int);
int main()
{
	int(*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);
	return 0;
}
int sum(int a, int b)
{
	return(a + b);
}*/

/*
void func(int(*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
int main()
{
	int sel;
	printf("01 두 정수 합\n");
	printf("02 두 정수 곱\n");
	printf("03두 정수 중 큰 값 계산\n");
	printf("원하는 연산 선택 : ");
	scanf_s("%d", &sel);

	switch (sel)
	{
	case1: func(sum); break;
	case2: func(mul); break;
	case3: func(max); break;
	}
	return 0;
}
void func(int(*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수 값 입력 : ");
	scanf_s("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과값은 : %d\n", res);
}
int sum(int a, int b)
{
	return(a + b);
}
int mul(int a, int b)
{
	return (a*b);
}
int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}*/

/*
int main()
{
	int a = 10;
	double b = 3.5;
	void *vp;

	vp = &a;
	printf("a : %d\n", *(int *)vp);

	vp = &b;
	printf("b: %.1lf\n", *(double *)vp);

	return 0;
}*/