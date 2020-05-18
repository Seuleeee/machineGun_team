#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps);

int main(int argc, char **argv)
{
	//16-1
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
	*pd = 3.14;
	printf("정수형 : %d\n", *pi);
	printf("실수형 : %.1lf\n", *pd);

	free(pi);
	free(pd);*/

	//16-2
	/*int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1);
	}

	printf("5명의 나이를 입력하세요. : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("5명 평균나이 : %.4lf", (sum / 5.0));
	free(pi);*/

	//16-3
	/*int* pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int));
	while (1)
	{
		printf("양수만 입력하세요. : ");
		scanf_s("%d", &num);
		if (num <= 0)
		{
			break;
		}
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

	//16-4
	/*char temp[80];
	char* str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요. : ");
		gets(temp);
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

	//16-5
	/*char temp[80];
	char* str[21] = { 0 };
	int i = 0;

	while (i < 20)
	{
		printf("문자열을 입력하시오. : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)
		{
			break;
		}
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}
	print_str(str);
	for (i=0; str[i] != NULL; i++)
	{
		free(str[i]);
	}*/

	//16-6
	int i;
	for (i=0; i<argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return 0;
}

void print_str(char** ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}