#include<stdio.h>

/*
void assign(void);
int main()
{
	auto int a = 0;

	assign();
	printf("main함수 a : %d\n", a);
	return 0;
}
void assign(void)
{
	int a;
	a = 10;
	printf("assign 함수 a : %d\n", a);
}*/

/*
int main()
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d,%d\n", a,b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("교환 후 a,b의 값 : %d,%d\n", a, b);
	return 0;
}*/

/*
void assign10(void);
void assign20(void);
int a;
int main() {
	printf("함수 호출 전a 값 : %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후a값 : %d\n", a);
	return 0;
}
void assign10(void)
{
	a = 10; //전역변수 지역변수 사용범위 겹치면 지역변수 먼저 사용
}
void assign20(void)
{
	int a;
	a = 20;
}*/

/*
void auto_func(void);
void static_func(void);
int main()
{
	int i;
	printf("일반 지역 변수(auto)사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}
	printf("정적 지역 변수(static)사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;
}
void auto_func(void) 
{
	auto int a = 0;
	a++;
	printf("%d\n", a);
}
void static_func(void) 
{
	static int a; //정적 지역 변수로 실행~종료까지 저장공간 유지
	a++;
	printf("%d\n", a);
}*/

/*
int main()
{ //레지스터 변수 컴파일러가 레지스터에 생성할지 말지 결정
	register int i; //주소 못구함
	auto int sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}*/

/*
void add_ten(int a);
int main() {
	int a = 10;
	add_ten(a);
	printf("a : %d\n", a);
	return 0;
}
void add_ten(int a)
{
	a = a + 10;
}*/

/*
void add_ten(int *pa);
int main() {
	int a = 10;
	
	add_ten(&a);
	printf("a : %d\n", a);
	return 0;
}
void add_ten(int *pa)
{
	*pa = *pa + 10;
}*/

/*
int *sum(int a, int b);
int main() {
	int *resp;
	resp = sum(10, 20);
	printf("두 정수 합 : %d\n", *resp);
	return 0;
}
int *sum(int a, int b)
{
	static int res;
	res = a + b;
	return &res;
}*/