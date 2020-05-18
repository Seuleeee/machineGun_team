#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "team.h"
#include "student.h"
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("범위를 벗어났습니다!\n")
#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))
#define PRINT_EXPR(x) printf(#x "=%d\n", x)
#define NAME_CAT(x, y)(x ## y)
#define VER 7
#define BIT16
#pragma pack(push, 1)

//int a;

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
	// 평균, 표준편차 구하기
	//input_number();
	
	//-----------------------------------------------

	// 10장 실습

	/*int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}*/

	//-----------------------------------------------

	/*int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}*/

	//-----------------------------------------------

	/*int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값: ");
	for (i = 0; i < 3; i++)
	{
		printf("%d", *pa);
		pa++;
	}*/

	//-----------------------------------------------

	/*int ary[5] = { 10, 20, 30, 40, 50 };
	int* pa = ary;
	int* pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);

	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb) printf("%d\n", *pa);
	else printf("%d\n", *pb);*/

	//-----------------------------------------------

	/*void print_ary(int* pa);
	int ary[5] = { 10, 20, 30, 40, 50 };
	print_ary(ary);*/

	//-----------------------------------------------

	/*void print_ary2(int* pa, int size);
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary2(ary1, 5);
	printf("\n");
	print_ary2(ary2, 7);*/

	//-----------------------------------------------

	/*void input_ary(double* pa, int size);
	double find_max(double* pa, int size);
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	printf("배열의 최댓값: %.1lf\n", max);*/

	//-----------------------------------------------

	//11장 실습
	/*char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}

	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);*/

	//-----------------------------------------------

	/*char ch1, ch2;
	
	scanf("%c%c", &ch1, &ch2);
	printf("[%c%c]", ch1, ch2);*/

	//-----------------------------------------------

	/*int ch;
	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');*/

	//-----------------------------------------------

	/*char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch);
		printf("%c", ch);
	}*/

	//-----------------------------------------------

	/*int res;
	char ch;

	while (1)
	{
		res = scanf("%c", &ch);
		if (res == -1) break;
		printf("%d", ch);
	}*/

	//-----------------------------------------------

	/*void my_gets(char* str, int size);
	char str[7];

	my_gets(str, sizeof(str));
	printf("입력한 문자열 : %s\n", str);*/

	//-----------------------------------------------

	/*int num, grade;

	printf("학번 입력: ");
	scanf("%d", &num);
	getchar();
	printf("학점 입력: ");
	grade = getchar();
	printf("학번: %d, 학점: %c", num, grade);*/

	//-----------------------------------------------

	// 12장 실습

	/*printf("apple이 저장된 시작 주소 값: %p\n", "apple");
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]);*/

	//-----------------------------------------------

	/*const char* dessert = "apple";
	
	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);*/

	//-----------------------------------------------

	/*char str[80];

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("첫 번째 단어: %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);*/

	//-----------------------------------------------

	/*char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets_s(str);
	printf("입력한 문자열은 %s입니다.", str);*/

	//-----------------------------------------------

	/*char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("입력한 문자열은 %s입니다.", str);*/

	//-----------------------------------------------

	/*int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);

	printf("이름 입력: ");
	gets_s(name);
	printf("나이 : %d, 이름 : %s\n", age, name);*/

	//-----------------------------------------------

	/*char str[80] = "apple juice";
	const char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");*/

	//-----------------------------------------------

	/*char str1[80] = "strawberry";
	char str2[80] = "apple";
	const char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);*/

	//-----------------------------------------------

	/*char str[20] = "mango tree";

	strncpy(str, "apple-pie", 5);

	printf("%s\n", str);*/

	//-----------------------------------------------

	/*char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);*/

	//-----------------------------------------------

	/*char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;
	printf("이름이 긴 과일은 : %s\n", resp);*/

	//-----------------------------------------------

	/*char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);*/

	//-----------------------------------------------

	/*void assign(void);

	auto a = 0;

	assign();
	printf("main 함수 a: %d\n", a);*/

	//-----------------------------------------------

	/*int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int temp;

		temp = a;
		a = b;
		b = temp;
	}

	printf("교환 후 a와 b의 값: %d, %d\n", a, b);*/

	//-----------------------------------------------

	//void assign10(void);
	//void assign20(void);

	//printf("함수 호출 전 a 값 : %d\n", a);

	//assign10();
	//assign20();

	//printf("함수 호출 후 a 값 : %d\n", a);

	//-----------------------------------------------
	
	/*void auto_func(void);
	void static_func(void);

	int i;

	printf("일반 지역 변수(auto)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("정적 지역 변수(static)를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}*/

	//-----------------------------------------------

	/*register int i;
	auto sum = 0;

	for (i = 1; i <= 10000; i++)
	{
		sum += i;
	}

	printf("%d\n", sum);*/

	//-----------------------------------------------

	/*void add_ten(int a);
	int a = 10;

	add_ten(a);
	printf("a : %d\n", a);*/

	//-----------------------------------------------

	/*void add_ten2(int* pa);
	int a = 10;

	add_ten2(&a);
	printf("a : %d\n", a);*/

	//-----------------------------------------------

	/*int* sum(int a, int b);
	int* resp;
	resp = sum(10, 20);
	printf("두 정수의 합 : %d\n", *resp);*/

	//-----------------------------------------------

	// 14장 실습

	/*int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4, 0;
		printf("총점: %d, 평균: %.2lf\n", total, avg);
	}*/
	
	//-----------------------------------------------

	/*int num[3][4] = { {1, 2, 3, 4 }, {5, 6, 7, 8 }, {9, 10, 11, 12 } };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		printf("\n");
	}*/

	//-----------------------------------------------

	/*char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}*/

	//-----------------------------------------------

	/*char animal1[5][10] = {
		{'d', 'o', 'g'},
		{'t', 'i', 'g', 'e', 'r'},
		{'r', 'a', 'b', 'b', 'i', 't'},
		{'h', 'o', 'r', 's', 'e'},
		{'c', 'a', 't', '\0'}
	};

	char animal2[][10] = { "dog", "tiger", "rabbit", "horse", "cat" };
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]);
	}*/

	//-----------------------------------------------

	/*int score[2][3][4] = {
		{{72, 80, 95, 60}, {68, 98, 83, 90}, {75, 72, 84, 90}}, 
		{{66, 85, 90, 88}, {95, 92, 88, 95}, {43, 72, 56, 75}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
	}*/

	//-----------------------------------------------

	/*const char* pary[5];
	int i;

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}*/

	//-----------------------------------------------

	/*int ary1[4] = { 1, 2, 3, 4 };
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24 };
	int* pary[3] = { ary1, ary2, ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}*/

	//-----------------------------------------------

	/*int a = 10;
	int* pi;
	int** ppi;

	pi = &a;
	ppi = &pi;

	printf("----------------------------------\n");
	printf("변수  변숫값  &연산  *연산  **연산\n");
	printf("----------------------------------\n");
	printf("  a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------\n");*/

	//-----------------------------------------------

	/*void swap_ptr(char** ppa, char** ppb);
	const char* pa = "success";
	const char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swap_ptr(&pa, &pa);
	printf("pa -> %s, pb -> %s\n", pa, pb);*/

	//-----------------------------------------------

	/*void print_str(const char** pps, int cnt);
	const char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" };
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);*/

	//-----------------------------------------------

	/*int ary[5];

	printf(" ary의 값 : %u\t", ary);
	printf("ary의 주소 : %u\n", &ary);
	printf("  ary + 1 : %u\t", ary + 1);
	printf("  &ary + 1 : %u\n", &ary + 1);*/

	//-----------------------------------------------

	/*int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	int(*pa)[4];
	int i, j;
	
	pa = ary;
	for(i=0;i<3;i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
	*/
	//-----------------------------------------------
	
	/*void print_ary2(int(*)[4]);
	int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
	print_ary2(ary);*/

	//-----------------------------------------------

	/*int sum15_2(int, int);

	int (*fp)(int, int);
	int res;

	fp = sum15_2;
	res = fp(10, 20);
	printf("result : %d\n", res);*/

	//-----------------------------------------------

	/*void func(int (*fp)(int, int));
	int sum(int a, int b);
	int mul(int a, int b);
	int max(int a, int b);

	int sel;

	printf("01 두 정수의 합\n");
	printf("02 두 정수의 곱\n");
	printf("03 두 정수 중에서 큰 값 계산\n");
	printf("원하는 연산을 선택하세요 : ");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;
	}*/

	//-----------------------------------------------

	/*int a = 10;
	double b = 3.5;
	void* vp;

	vp = &a;
	printf("a : %d\n", *(int*)vp);

	vp = &b;
	printf("b : %.1lf\n", *(double*)vp);*/

	//-----------------------------------------------
	// 16장 실습

	/*int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1);
	}
	pd = (double*)malloc(sizeof(double));
	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi);
	free(pd);*/

	//-----------------------------------------------

	/*int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("메모리가 부족합니다!\n");
		exit(1);
	}
	
	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	free(pi);*/

	//-----------------------------------------------

	/*int* pi,
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);*/

	//-----------------------------------------------

	/*char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets_s(temp);
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);


	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}*/

	//-----------------------------------------------
	
	/*void print_str16_2(char** ps);
	char temp[80];
	char* str[21] = { 0 };
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하세요 : ");
		gets_s(temp);
		if (strcmp(temp, "end") == 0) break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}

	print_str16_2(str);*/

	//-----------------------------------------------

	/*int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}*/

	//-----------------------------------------------

	// 17장 실습
	/*struct student
	{
		int num;
		double grade;
	};

	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);*/

	//-----------------------------------------------
	
	/*struct profile 
	{
		char name[20];
		int age;
		double height;
		char* intro;
	};  

	struct profile yuni;
	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets_s(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);*/

	//-----------------------------------------------

	/*struct profile
	{
		int age;
		double height;
	};
	struct student
	{
		struct profile pf;
		int id;
		double grade;
	};
	
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);*/

	//-----------------------------------------------

	/*struct student
	{
		int id;
		char name[20];
		double grade;
	};

	struct student s1 = { 315, "홍길동", 2.4 },
					s2 = { 316, "이순신", 3.7 },
					s3 = { 317, "세종대왕", 4.4 };


	struct student max;

	max = s1;
	if (s2.grade > max.grade) max = s2;
	if (s3.grade > max.grade) max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);*/

	//-----------------------------------------------

	/*struct vision
	{
		double left;
		double right;
	};

	struct vision exchange(struct vision robot);

	struct vision robot;
	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);
	
	struct vision exchange(struct vision robot)
	{
		double temp;

		temp = robot.left;
		robot.left = robot.right;
		robot.right = temp;

		return robot;
	}*/

	//-----------------------------------------------

	
	/*struct score
	{
		int kor;
		int eng;
		int math;
	};

	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);*/

	//-----------------------------------------------

	/*struct address
	{
		char name[20];
		int age;
		char tel[20];
		char addr[80];

	};

	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}*/

	//-----------------------------------------------

	/*void print_list(struct address* lp);
	struct address
	{
		char name[20];
		int age;
		char tel[20];
		char addr[80];

	};

	struct address list[5] = {
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};

	print_list(list);*/


	//-----------------------------------------------

	/*struct list
	{
		int num;
		struct list* next;
	};

	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 };
	struct list* head = &a, * current;

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);
	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");*/

	//-----------------------------------------------

	/*union student
	{
		int num;
		double grade;
	};

	union student s1 = { 315 };

	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);*/

	//-----------------------------------------------

	/*enum season {SPRING, SUMMER, FALL, WINTER};

	enum season ss;
	const char* pc = NULL;

	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저 활동 => %s\n", pc);*/

	//-----------------------------------------------

	/*struct student
	{
		int num;
		double grade;
	};
	typedef struct student Student;
	void print_data(Student* ps);

	Student s1 = { 315, 4.2 };

	print_data(&s1);*/

	//-----------------------------------------------

	// 18장 실습

	/*FILE* fp;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	printf("파일이 열렸습니다.\n");
	fclose(fp);*/

	//-----------------------------------------------

	/*FILE* fp;	
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);

	}
	fclose(fp);*/

	//-----------------------------------------------

	/*FILE* fp;
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);*/


	//-----------------------------------------------

	/*int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}*/

	//-----------------------------------------------

	/*int ch;

	while (1)
	{
		ch = fgetc(stdin);
		if (ch == EOF)
		{
			break;
		}
		fputc(ch, stdout);
	}*/

	//-----------------------------------------------

	/*FILE* fp;
	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };
	int i, res;

	fp = fopen("a.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc(ary[i], fp);
	}
	fclose(fp);
	fp = fopen("a.txt", "rt");
	while (1)
	{
		res = fgetc(fp);
		if(res ==EOF) break;
		printf("%4d", res);
	}
	fclose(fp);*/

	//-----------------------------------------------

	/*FILE* fp;
	char str[20];

	fp = fopen("a.txt", "a+");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}
	while (1)
	{
		printf("과일 이름 : ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0)
		{
			break;
		}
		else if (strcmp(str, "list") == 0)
		{
			fseek(fp, 0, SEEK_SET);
			while (1)
			{
				fgets(str, sizeof(str), fp);
				if (feof(fp))
				{
					break;
				}
				printf("%s", str);
			}
		}
		else
		{
			fprintf(fp, "%s\n", str);
		}

	}
	fclose(fp);*/

	//-----------------------------------------------

	/*FILE* ifp, * ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1)
	{
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL)
		{
			break;
		}
		str[strlen(str) - 1] = '\0';
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ifp);
	fclose(ofp);*/

	//-----------------------------------------------

	/*FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}
	while (1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
		if (res == EOF)
		{
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
	}

	fclose(ifp);
	fclose(ofp);*/

	//-----------------------------------------------

	/*FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	while (fgetc(fp) != '\n') {}
	fgets(name, sizeof(name), fp);

	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);*/

	//-----------------------------------------------

	/*FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt");
	fprintf(afp, "%d", num);

	bfp = fopen("b.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);
	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclose(bfp);*/

	//-----------------------------------------------

	// 19장 실습

	/*Student a = { 315, "홍길동" };

	printf("학번 : %d, 이름 : %s\n", a.num, a.name);*/


	//-----------------------------------------------

	
	/*double radius, area;

	printf("반지름을 입력하세요(100이하) : ");
	scanf("%lf", &radius);
	area = PI * radius * radius;
	if (radius > LIMIT) ERR_PRN;
	else printf("원의 면적 : %.2lf\n", area, MSG);*/

	//-----------------------------------------------

	/*int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res : %d\n", res);*/

	//-----------------------------------------------

	/*void func(void);

	printf("컴파일 날짜와 시간 : %s, %s \n\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c"
	func();*/

	//-----------------------------------------------

	/*int a1, a2;

	NAME_CAT(a, 1) = 10;
	NAME_CAT(a, 2) = 20;
	PRINT_EXPR(a1 + a2);
	PRINT_EXPR(a2 - a1);*/

	//-----------------------------------------------
	
	/*int max;

#if VER >= 6
	printf("버전 %d입니다.\n", VER);
#endif
#ifdef BIT16
	max = 32767;
#else
	max = 2147483647;
#endif
	printf("int형 변수의 최댓값 : %d\n", max);*/

	//-----------------------------------------------

	/*typedef struct
	{
		char ch;
		int in;
	} Sample1;

#pragma pack(pop)
	typedef struct
	{
		char ch;
		int in;
	}Sample2;

	printf("Sample1 구조체의 크기 : %d바이트\n", sizeof(Sample1));
	printf("Sample2 구조체의 크기 : %d바이트\n", sizeof(Sample2));*/

	//-----------------------------------------------

	/*int input_data(void);
	double average(void);
	void print_data(double);

	int count = 0;
	static int total = 0;

	double avg;

	total = input_data();
	avg = average();
	print_data(avg);*/

	//-----------------------------------------------

	/*extern int count;
	int total = 0;

	int input_data(void)
	{
		int pos;

	}
	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0) break;
		count++;
		total += pos;
	}
	return total;*/

	//-----------------------------------------------

	/*extern int count;
	extern int total;

	double average(void)
	{
		return total / (double)count;
	}*/

	//-----------------------------------------------

	/*typedef struct
	{
		int x;
		int y;
	}Point;*/

	//-----------------------------------------------

	/*typedef struct
	{
	Point first;
	Point seconf;
	}Line;*/

	//-----------------------------------------------

	/*Line a = { {1,2}, {5, 6} };
	Point b;

	b.x = (a.first.x + a.second.x) / 2;
	b.y = (a.first.y + a.second.y) / 2;
	printf("선의 가운데 점의 좌표 : (%d, %d)\n", b.x, b.y);*/

	//-----------------------------------------------

//#ifndef _POINT_H_
//#define _POINT_H_
//
//typedef struct
//{
//	int x;
//	int y;
//}Point;
//#endif

	//-----------------------------------------------




}	

//void print_data(double avg)
//{
//	printf(" 입력한 양수의 개수 : %d\n", count);
//	printf(" 전체 합과 평균 : %d, %.1lf\n", total, avg);
//}

void input_data(int* pa, int* pb)
{
	printf("두 정수 입력 : ");
	scanf("%d%d", pa, pb);
}

double average(int a, int b)
{
	int tot;
	double avg;

	tot = a + b;
	avg = tot / 2.0;

	return avg;
}

void func(void)
{
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}
//void print_data(Student* ps)
//{
//	printf("학번 : %d\n", ps->num);
//	printf("학점 : %.1lf\n", ps -> grade);
//}


//void print_list(struct address* lp)
//{
//	int i;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%10s%5d%15s%20s\n", (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
//	}
//}

void print_str16_2(char** ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}

void func(int (*fp)(int, int))
{
	int a, b;
	int res;

	printf("두 정수의 값을 입력하세요 : ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결괏값은 : %d\n", res);
}

int mul(int a, int b)
{
	return (a * b);
}

int max(int a, int b)
{
	if (a > b) return a;
	else return b;
}

int sum15_2(int a, int b)
{
	return (a + b);
}


void print_ary2(int(*pa)[4])
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

void print_str(const char** pps, int cnt)
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}

void swap_ptr(char** ppa, char** ppb)
{
	char* pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}
int* sum_13(int a, int b)
{
	static int res;
	res = a + b;
	return &res;

}

void add_ten2(int* pa)
{
	*pa = *pa + 10;
}

void add_ten(int a)
{
	a = a + 10;
}


void auto_func(void)
{
	auto a = 0;

	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;
	a++;
	printf("%d\n", a);
}

void assign(void)
{
	//a = 10;
}

void assign20(void)
{
	int a;

	a = 20;
}
void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}

void input_ary(double* pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 0; i < size; i++)
	{
		if (pa[i] > max) max = pa[i];
	}
	return max;
}
void print_ary2(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", pa[i]);
	}
}

void print_ary(int* pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%d", pa[i]);
	}
}

void swap(int a, int b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
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