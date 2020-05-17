#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "student.h"
#include "point.h"
#include "line.h"
#define PI 3.141592
#define LIMIT 100.0
#define MSG "�հ�!"
#define ERR_PRN printf("������ �����.\n")
#define SUM(a, b) ((a)+(b))
#define MUL(a, b) ((a)*(b))
#define PRINT_EXPR(x) printf(#x " = %d\n", x)
#define NAME_CAT(x, y) (x ## y)
#define VER 7
#define BIT16
#pragma pack(push, 1)
typedef struct
{
	char ch;
	int in;
} Sample1;

#pragma pack2(pop)
typedef struct
{
	char ch;
	int in;
} Sample2;



void func(void);
int input_data(void);
double avg_data(void);
void print_data(double avg);


int count = 0;
static int total = 0;

int main(void)
{
	//19-1
	/*Student a = { 315, "���ѽ�" };
	printf("�й� %d �̸� %s\n", a.num, a.name);*/

	//19-2
	/*double radius, area;
	printf("�������� �Է��ϼ���. : ");
	scanf_s("%lf", &radius);
	area = PI * radius * radius;
	if (radius > LIMIT)
	{
		ERR_PRN;
	}
	else
	{
		printf("���Ǹ��� : %.2lf (%s)\n", area, MSG);
	}*/

	//19-3
	/*int a = 10, b = 132;
	int x = 3, y = 4;
	int res;

	printf("a+b = %d\n", SUM(a, b));
	printf("a*b = %d\n", MUL(x, y));
	res = 30 / MUL(2, 5);
	printf("res : %d", res);*/

	//19-4
	/*printf("������ ��¥ �ð�%s, %s\n\n", __DATE__, __TIME__);
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);

#line 100 "macro.c"
	func();

	double avg;
	total = input_data();
	avg = avg_data();
	print_data(avg);*/

	//19-5
	/*int a1, a2;

	NAME_CAT(a, 1) = 10;
	NAME_CAT(a, 2) = 10;
	PRINT_EXPR(a1 + a2);
	PRINT_EXPR(a2 - a1);*/

	//19-6
	/*int max;
#if VER >=6
	printf("���� %d\n", VER);
#endif
#ifdef BIT16
	max = 32767;
#else
	max = 214548949864;
#endif
	printf("int ���� �ִ밪 : %d\n", max);*/

	//19-7
	/*printf("size of Sample1 struct : %d byte\n", sizeof(Sample1));
	printf("size of Sample2 struct : %d byte\n", sizeof(Sample2));*/

	double avg;
	total = input_data();
	avg = avg_data();
	print_data(avg);

	Line a = {
		{1, 2},
		{5, 6}
	};
	Point b;

	b.x = (a.first.x + a.second.x)/2;
	b.y = (a.first.y + a.second.y)/2;
	printf("���� �߽���ǥ : (%d, %d)\n", b.x, b.y);

	return 0;
}

void func(void)
{
	printf("\n");
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);
}

void print_data(double avg)
{
	printf("�Է��� ����� �� : %d\n", count);
	printf("��ü�հ� ��� : %d, %.1lf\n", total, avg);
}
