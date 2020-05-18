#include <stdio.h>
#define test 0
int main() {
	/*int num = 100;
	float fnum = 8.5;
	double dnum = 8.5;

	int arr[5] = { 0, };
	int arr2[5] = { 0, };*/

	/*char f[6] = {'a', 'p', 'p', 'l', 'e'};
	char f2[6] = "apple";
	char* str = "apple";

	f[0] = 'A';

	printf("%s\n", str);
	printf("%s\n", f);

	int age;
	double height;

	printf("나이와 키를 입력하세요.");
	scanf("%d%lf", &age, &height);
	printf("나이는는 %d 이고 키는 %lf입니다.", age, height);*/

	/*char grade;
	char name[20];

	printf("학점입력");
	scanf("%c", &grade);

	printf("이름입력");
	scanf("%s", &name);

	printf("%s의 학점은 %c입니다.", name, grade);*/

	int rank;
	int m = 0;
	printf("랭크를 입력하세요. : ");
	scanf("%d", &rank);

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

	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);

	res = (a >= b);
	printf("a >= b : %d\n", res);

	res = (a < b);
	printf("a < b : %d\n", res);

	res = (a <= b);
	printf("a <= b : %d\n", res);

	res = (a <= c);
	printf("a <= c : %d\n", res);

	res = (a == b);
	printf("a == b : %d\n", res);

	res = (a != c);
	printf("a != c : %d\n", res);

	printf("=============================================\n");

	int num1 = 30;
	
	res = (num1 > 10) && (num1 < 20);
	printf("%d\n", res);

	res = (num1 < 10) || (num1 > 20);
	printf("%d\n", res);

	res = !(num1 >= 30);
	printf("%d\n", res);

	printf("================ 비 트 연 산 자 ==============\n");
	int d = 10, e = 12;
#if test
	

	printf("a & b : %d\n", d & e);
	printf("a ^ b : %d\n", d ^ e);
	printf("a | b : %d\n", d | e);
	printf("~a : %d\n", ~d);
	printf("a << 1 : %d\n", d << 1);
	printf("a >> 2 : %d\n", d >> 2);
#else
	int result_bitAnd = d & e;
	int result_bitXor = d ^ e;
	int result_bitOr = d | e;
	int result_bitComple = ~d;
	int result_Left = d << 1;
	int result_Right = d >> 2;

	printf("a & b : %d\n", result_bitAnd);
	printf("a ^ b : %d\n", result_bitXor);
	printf("a | b : %d\n", result_bitOr);
	printf("~a : %d\n", result_bitComple);
	printf("a << 1 : %d\n", result_Left);
	printf("a >> 2 : %d\n", result_Right);
#endif

	//printf("I must learn computer structure\n");
	//printf("%d\n", num); //break point, 컴파일러가 진행하다가 멈춤, F5눌러서 디버그해봄.

	//printf("%o\n", 10);
	//printf("%o\n", 12);
	//printf("%u\n", 12);
	return 0;
}