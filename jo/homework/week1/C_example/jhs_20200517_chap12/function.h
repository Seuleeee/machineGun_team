#pragma once
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>


void const_str();
void pointer_str();
void scanf_str();
void get_str();
void fgets_str();
void problem_buffer();
void output_str();
void strcpy_str();
void strncpy_str();
void cat_str();
void strlen_str();
void compare_str();

void const_str()
{
	printf("banana가 저장된 시작 주소 값 : %p\n", "banana");
	printf("두 번째 문자의 주소 값 : %p\n", "banana" + 1);
	printf("첫 번째 문자 : %c\n", *"banana");
	printf("두 번째 문자 : %c\n", *("banana"+1));
	printf("배열로 표현한 세 번째 문자 : %c\n", "banana"[2]);

	return;
}

void pointer_str()
{
	char* desert = "hamberger";
	printf("오늘 후식은 %s.\n", desert);
	desert = "pizza";
	printf("내일 후식은 %s.\n", desert);

	return;
}

void scanf_str()
{
	//char *str = malloc(sizeof(char) * 80);
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("첫 번째 단어 : %s\n", str);
	scanf("%s", str);
	printf("버퍼에 남아있는 두 번째 단어 : %s\n", str);
	free(str);

	return;
}

void get_str()
{
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s 입니다.", str);

	return;
}

void fgets_str()
{
	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("입력한 문자열은 %s 입니다.", str);

	return;
}

//개행문자로 인해 gets 입력 못받음
void problem_buffer()
{
	int age;
	char name[20];
	printf("나이 : ");
	scanf_s("%d", &age);
	printf("이름 : ");
	gets(name);
	printf("나이는 %d, 이름은 %s입니다.\n", age, name);

	return;
}

void output_str()
{
	char str[80] = "apple juice";
	char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return;
}

void strcpy_str()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	return;
}

void strncpy_str()
{
	char str[20] = "mango tree";
	strncpy(str, "apple-pie", 5);
	printf("%s\n", str);
	return;
}

void cat_str()
{
	char str[80] = "straw";
	strcat(str, "berry");
	strncat(str, "piece", 3);
	printf("%s\n", str);

	return;
}

void strlen_str()
{
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}
	else
	{
		resp = str2;
	}
	printf("이름이 긴 과일은 : %s\n", resp);

	return;
}

void compare_str()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	if (strcmp(str1, str2) > 0)
	{
		printf("%s\n", str1);
	}
	else
	{
		printf("%s\n", str2);
	}

	return;
}
