#include <stdio.h>
#include "inputString.h"
#include "StringIO.h"
#include "chap9_pointer.h"
#include "team_test.h"


void print_char(char ch, int count);
int sum(int x, int y);
void print_gugudan(int i, int j);
void learn_while(int a, int i);
void learn_break(int count);
void fruit(int count, int limit);
void learn_doWhile(int a);
double calc(int num1, int num2, char symbol); 
void learn_array();
void array_and_loop();
void reset_array();

int main() {
	int i, j;
	int a = 100, b = 200;
	int result = sum(a, b); //덧셈

	input_number();
	/*find_addr(15, 15.5, '한슬');*/

	//learn_array(); //배열처음
	//array_and_loop(); //배열과 반목문
	//reset_array(); //배열의 선언과 초기화
	//input_string(); //문자열 대입
	//string_IO(); //문자열 전용 입출력 함수


	//printf("%lf\n", calc(11, 3, '-')); //사칙연산계산기
	//print_gugudan(a, b); //곱셈
	//printf("%d\n", result); // 문자출력
	//print_char('@', 5); // 문자출력
	//learn_while(1, 10); //while 문
	//learn_doWhile(1); //do while
	//learn_break(10);//break
	//fruit(1, 12);//재귀함수
	
	return 0;
}

void learn_array()
{
	printf("배열을 선언합니다. 4번째 요솔를 입력해주세요.\n");
	int ary[5];
	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf_s("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);

	return;
}


void array_and_loop()
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int  count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)
	{
		scanf_s("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}
	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return;
}

void reset_array()
{
	char str[80] = "strawberryjam";

	printf("최초 문자열 : %s\n", str);
	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 후 문자열 : %s\n", str);

	return;
}


// =============================== 5, 6, 7 장 실습 [S] ===============================

void print_gugudan(int i, int j) {
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d + %d = %d\n", i, j, i * j);
		}
	}

	return;
}

int sum(int x, int y)
{
	int temp;

	temp = x + y;

	return temp;
}

void print_char(char ch, int count)
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%c\n", ch);
	}

	return;
}

void learn_while(int a, int i)
{
	while (a < i)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return;
}

void learn_doWhile(int a)
{
	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a : %d\n", a);

	return;
}

void learn_break(int count)
{
	int i;
	int sum = 0;
	for (i = 1; i <= count; i++)
	{
		sum += i;
		if (sum > 30)
		{
			break;
		}
	}
	printf("누적값 : %d\n", sum);
	printf("마지막 더한값 : %d\n", i);

	return;
}

void fruit(int count, int limit)
{
	printf("banana\n");
	if (count >= limit)
	{
		printf("재귀함수 끝!!!!\n");
		return;
	}
	
	fruit(count + 1, limit);
}

double calc(int num1, int num2, char symbol)
{
	switch (symbol)
	{

	case '+':
		printf("덧셈\n");
		return num1 + num2;
		break;
	case '-':
		printf("뺄셈\n");
		return num1 - num2;
		break;
	case '*':
		printf("곱셈\n");
		return num1 * num2;
		break;
	case '/':
		printf("나눗셈\n");
		return num1 / num2;
		break;
	default:
		break;
	}
}
// =============================== 5, 6, 7 장 실습 [E] ===============================