#include<stdio.h>

/*
void assign(void);
int main()
{
	auto int a = 0;

	assign();
	printf("main�Լ� a : %d\n", a);
	return 0;
}
void assign(void)
{
	int a;
	a = 10;
	printf("assign �Լ� a : %d\n", a);
}*/

/*
int main()
{
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d,%d\n", a,b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("��ȯ �� a,b�� �� : %d,%d\n", a, b);
	return 0;
}*/

/*
void assign10(void);
void assign20(void);
int a;
int main() {
	printf("�Լ� ȣ�� ��a �� : %d\n", a);

	assign10();
	assign20();

	printf("�Լ� ȣ�� ��a�� : %d\n", a);
	return 0;
}
void assign10(void)
{
	a = 10; //�������� �������� ������ ��ġ�� �������� ���� ���
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
	printf("�Ϲ� ���� ����(auto)����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}
	printf("���� ���� ����(static)����� �Լ�...\n");
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
	static int a; //���� ���� ������ ����~������� ������� ����
	a++;
	printf("%d\n", a);
}*/

/*
int main()
{ //�������� ���� �����Ϸ��� �������Ϳ� �������� ���� ����
	register int i; //�ּ� ������
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
	printf("�� ���� �� : %d\n", *resp);
	return 0;
}
int *sum(int a, int b)
{
	static int res;
	res = a + b;
	return &res;
}*/