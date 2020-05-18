#include <stdio.h>

void assign(void);
void assign10(void);
void assign20(void);
void auto_func();
void static_func();
void add_ten(int a);
void add_ten_pointer(int* pa);
int* sum(int a, int b);

int a;

int main(void)
{
	//13-1
	/*auto int a = 0;
	assign();
	printf("main 함수 a : %d\n", a);*/

	//13-2
	/*int a = 10;
	int b = 20;

	printf("교환 전 a, b : %d, %d\n", a, b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("교환 후 a, b : %d, %d\n", a, b);*/

	//13-3
	/*printf("함수 호출 전 a : %d\n", a);
	assign10();
	assign20();
	printf("함수 호출 후 a : %d\n", a);*/

	//13-4
	/*int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}*/

	//13-5
	/*register int i;
	auto int sum = 0;

	for (i = 0; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);*/

	//13-6
	/*int a = 10;
	add_ten(a);
	printf("a : %d\n", a);*/

	//13-7
	/*int num = 10;
	add_ten_pointer(&num);
	printf("a : %d\n", num);*/

	//13-8
	int* resp;
	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);

	return 0;
}

void assign(void)
{
	int a;
	a = 10;
	printf("assign 함수 a : %d\n", a);
}

void assign10(void)
{
	a = 10;
}

void assign20(void)
{
	int a;
	a = 20;
}

void auto_func()
{
	auto int a = 0;
	a++;
	printf("%d\n", a);
	return;
}

void static_func()
{
	static int a = 0;
	a++;
	printf("%d\n", a);
	return;
}

void add_ten(int a)
{
	a = a + 10;
}

void add_ten_pointer(int *pa)
{
	*pa = *pa + 10;
}

int *sum(int a, int b)
{
	static int res;
	res = a + b;
	return &res;
}