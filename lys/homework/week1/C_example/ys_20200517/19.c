/*
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "student.h"

int main()
{
Student a = { 315,"홍길동" };
printf("학번 : %d, 이름 : %s\n", a.num, a.name);
return 0;
}*/

/*
#include<stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("범위를 벗어났습니다!\n")

int main(void)
{
double radius, area;
printf("반지름을 입력하세요(100이하) : ");
scanf("%lf", &radius);
area = PI * radius* radius;
if (radius > LIMIT) ERR_PRN;
else printf("원의 면적 : %.2lf(%s)\n", area, MSG);

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
printf("컴파일 날짜와 시간 : %s, %s \n\n", __DATE__, __TIME__);
printf("파일명: %s\n", __FILE__);
printf("함수명: %s\n", __FUNCTION__);
printf("행번호: %d\n", __LINE__);

#line 100 "macro.c"

func();

return 0;

}

void func(void)
{
printf("\n");
prinff("파일명: %s\n", __FILE__);
printf("함수명: %s\n", __FUNCTION__);
printf("행번호: %d\n", __LINE__);
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
printf("버전 %d입니다.\n", VER);
#endif

#ifdef BIT16
max = 32767;
#else
max = 2147483647;
#endif

printf("int형 변수의 최댓값 : %d\n", max);
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
printf("Sample1 구조체의 크기 : 5바이트");
printf("Sample2 구조체의 크기 : 8바이트");

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
printf("%d 와 %d의 평균: %.1lf\n", a, b, avg);

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
printf("입력한 양수의 개수 : %d\n",count);
printf("전체 합과 평균 : %d, %.1lf\n",total,avg);
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
printf("선의 가운데 점의 좌표 : (%d,%d)\n", b.x, b.y);

return 0;
}*/