#include <stdio.h>
#include <string.h>
#include <math.h>
#include "team.h"

int main(void)
{
	/*
	int num = 100;
	float fnum = 8.5;
	double dnum = 8.5;
	int arr[5] = { 0, };
	int arr2[5];
	*/

	/*char f[6] = {'a', 'p', 'p', 'l', 'e'};
	char f2[6] = "apple";
	const char* str = "apple";

	f[0] = 'A';

	printf("%s\n", f);*/

	/*int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);*/

	/*char grade;
	char name[20];

	printf("학점 입력: ");
	scanf("%c", &grade);
	printf("이름 입력: ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);*/

	/*int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);
	res = (a >= b);
	printf("a >= b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);*/

	/*int a = 10;
	int b = 12;
#if 0
	printf("a & b : %d\n", a & b);
	printf("a ^ b : %d\n", a ^ b);
	printf("a | b : %d\n", a | b);
	printf("~a : %d\n", ~a);
	printf("a << b : %d\n", a << 1);
	printf("a >> b : %d\n", a >> 2);
#else
	int result_bitAnd = a & b;
	int result_bitXor = a ^ b;
	int result_bitOr = a | b;
	int result_bitComplete = ~a;
	int result_bitLeft = a << 1;
	int result_bitRight = a >> 2;

	printf("a & b : %d\n", result_bitAnd);
	printf("a ^ b : %d\n", result_bitXor);
	printf("a | b : %d\n", result_bitOr);
	printf("~a : %d\n", result_bitComplete);
	printf("a << b : %d\n", result_bitLeft);
	printf("a >> b : %d\n", result_bitRight);
#endif
	return 0;*/


	//-----------------------------------------------

	/* 5장 실습
	int rank = 0, m = 0;
	printf("rank 입력: ");
	scanf("%d", &rank);
	printf("m 입력: ");
	scanf("%d", &m);

	switch (rank)
	{
	case 1:
		m = 300;
		break;

	case 2:
		m = 200;
		break;

	case 3:
		m = 100;
		break;

	default:
		m = 10;
		break;

	}

	printf("rank: %d, m: %d\n", rank, m);
	*/

	//-----------------------------------------------

	/*int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);*/

	/*int a = 1;
	int i;

	for (i = 0; i < 3; i++)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);*/

	//-----------------------------------------------

	/*int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);

	printf("a: %d\n", a);*/

	/*int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//-----------------------------------------------

	/*int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}
	printf("누적한 값: %d\n", sum);
	printf("마지막으로 더한 값: %d\n", i);*/

	//-----------------------------------------------

	//6장 실습

	/*int sum(int x, int y);

	int a = 10, b = 20;
	int result;

	result = sum(a, b);
	printf("result: %d\n", result);*/

	/*int get_num(void);

	int result;

	result = get_num();
	printf("반환 값 : %d\n", result);*/

	/*void print_char(char ch, int count);

	print_char('@', 5);*/

	//-----------------------------------------------

	// 7장 실습

	/*void print_line(void);

	print_line();
	printf("학번      이름       전공       학점\n");
	print_line();*/

	/*void fruit(void);

	fruit();*/

	/*void fruit(int count);

	fruit(1);*/

	//-----------------------------------------------

	// 8장 실습

	/*int ary[5];
	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);*/

	//-----------------------------------------------

	/*int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
	}

	for (i = 0;i < 5;i++)
	{
		total += score[i];
	}
	avg = total / (double)count;

	for (i = 0;i < 5;i++)
	{
		printf("%5d", score[i]);
	}

	printf("\n");

	printf("평균: %.1lf\n", avg);*/

	//-----------------------------------------------

	/*char str[80] = "applejam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);*/

	//-----------------------------------------------

	/*char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);*/

	//-----------------------------------------------

	/*char str[80];

	printf("문자열 입력: ");
	gets_s(str);
	puts("입력된 문자열: ");
	puts(str);*/

	//-----------------------------------------------

	/*char str[5];

	str[0] = 'O';
	str[1] = 'K';
	printf("%s\n", str);*/

	//-----------------------------------------------


	//void fruit(int num, int count);
	//int count;
	//printf("반복할 횟수 입력: ");
	//scanf("%d", &count);
	//fruit(1, count);

	//-----------------------------------------------
	//9장 실습

	/*int a;
	double b;
	char c;

	printf("int형 변수의 주소: %u\n", &a);
	printf("double형 변수의 주소: %u\n", &b);
	printf("char형 변수의 주소: %u\n", &c);*/

	//-----------------------------------------------

	/*int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("포인터로 a 값 출력 : %d\n", *pa);
	printf("변수명으로 a 값 출력 : %d\n", a);*/

	//-----------------------------------------------

	/*int a = 10, b = 15, total;
	double avg;
	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값: %d, %d\n", *pa, *pb);
	printf("두 정수의 합: %d\n", *pt);
	printf("두 정수의 평균 %.1lf\n", *pg);*/

	//-----------------------------------------------

	/*int a = 10, b = 20;
	const int* pa = &a;

	printf("변수 a 값: %d\n", *pa);
	pa = &b;
	printf("변수 b 값: %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a 값: %d\n", *pa);*/

	//-----------------------------------------------

	/*char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char형 변수의 주소 크기: %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기: %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기: %d\n", sizeof(&db));

	printf("char* 포인터의 크기: %d\n", sizeof(pc));
	printf("int* 포인터의 크기: %d\n", sizeof(pi));
	printf("double* 포인터의 크기: %d\n", sizeof(pd));

	printf("char* 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pc));
	printf("int* 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pi));
	printf("double* 포인터가 가리키는 변수의 크기: %d\n", sizeof(*pd));*/

	//-----------------------------------------------

	/*int a = 10;
	int* p = &a;
	double *pd;

	pd = p;
	printf("%lf\n", *pd);*/

	//-----------------------------------------------

	/*void swap(int* pa, int* pb);
	int a = 10, b = 20;

	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);*/

	//-----------------------------------------------

	/*void swap(void);
	int a = 10, b = 20;

	swap();
	printf("a:%d, b:%d\n", a, b);*/

	//-----------------------------------------------
	input_number();

}


void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

int sum(int x, int y) 
{
	int temp;

	temp = x + y;

	return temp;
}

int get_num(void)
{
	int num;

	printf("양수 입력: ");
	scanf("%d", &num);

	return num;
}

void print_char(char ch, int count) 
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
}

void print_line(void)
{
	int i;

	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

void fruit(int num, int count)
{
	printf("apple\n");
	if (num == count) return;
	fruit(num + 1, count);
	printf("jam\n");
}