/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

int main()
{
Student a = { 315,"ȫ�浿" };
printf("�й� : %d, �̸� : %s\n", a.num, a.name);
return 0;
}*/

/*
#include<stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("������ ������ϴ�!\n")

int main(void)
{
double radius, area;
printf("�������� �Է��ϼ���(100����) : ");
scanf("%lf", &radius);
area = PI * radius* radius;
if (radius > LIMIT) ERR_PRN;
else printf("���� ���� : %.2lf(%s)\n", area, MSG);

return 0;
}
*/

/*
#include<stdio.h>
#define SUM(a,b)((a)+(b))
#define MUL(a,b)((a)*(b))

int main(void)
{
int a = 10, b = 20;
int x = 30, y = 40;
int res;

printf("a+b = %d\n", SUM(a, b));
printf("x+y = %d\n", SUM(x, y));
res = 30 / MUL(2, 5);
printf("res : %d\n", res);

return 0;
}
*/

/*
#include<stdio.h>

void func(void);

int main(void)
{
printf("������ ��¥�� �ð� : %s, %s \n\n", __DATE__, __TIME__);
printf("���ϸ�: %s\n", __FILE__);
printf("�Լ���: %s\n", __FUNCTION__);
printf("���ȣ: %d\n", __LINE__);

#line 100 "macro.c"

func();

return 0;

}

void func(void)
{
printf("\n");
prinff("���ϸ�: %s\n", __FILE__);
printf("�Լ���: %s\n", __FUNCTION__);
printf("���ȣ: %d\n", __LINE__);
}
*/

/*
#include<stdio.h>
#define PRINT_EXPR(x) printf(#x " = %d\n" , x)
#define NAME_CAT(x,y) (x##y)

int main(void)
{
int a1, a2;

NAME_CAT(a, 1) = 10;
NAME_CAT(a, 2) = 20;
PRINT_EXPR(a1 + a2);
PRINT_EXPR(a2 - a1);

return 0;
}
*/
/*
#include<stdio.h>
#define VER 7
#define BIT16

int main(void)
{
int max;

#if VER >= 6
printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16
max = 32767;
#else
max = 2147483647;
#endif

printf("int�� ������ �ִ� : %d\n", max);
return 0;

}
*/
/*
#include<stdio.h>
#pragma pack(push,1)
typedef struct
{
char ch;
int in;

}Saple1;

#pragma pack(pop)
typedef struct
{
char ch;
int in;

}Sample2;

int main(void)
{
printf("Sample1 ����ü�� ũ�� : 5����Ʈ");
printf("Sample2 ����ü�� ũ�� : 8����Ʈ");

return 0;
}
*/
/*
#include<stdio.h>

void input_data(int *, int *);
double average(int, int);

int main(void)
{
int a, b;
double avg;

input_data(&a, &b);
avg = average(a, b);
printf("%d �� %d�� ���: %.1lf\n", a, b, avg);

return 0;
}
*/
/*
#include<stdio.h>

int input_data(void);
double average(void);
void print_data(double);

int count = 0;
static int total = 0;

int main(void)
{
double avg;

total = input_data();
avg = average();
print_data(avg);



return 0;
}

void print_data(double avg)
{
printf("�Է��� ����� ���� : %d\n",count);
printf("��ü �հ� ��� : %d, %.1lf\n",total,avg);
}
*/

/*
#include<stdio.h>
#include "point.h"
#include "line.h"

int main(void)
{
Line a = { {1,2},{5,6} };
Point b;

b.x = (a.first.x + a.second.x) / 2;
b.y = (a.first.y + a.second.y) / 2;
printf("���� ��� ���� ��ǥ : (%d,%d)\n", b.x, b.y);

return 0;
}*/