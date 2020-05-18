#pragma once
#include <stdio.h>
#include <stdlib.h>    // malloc, free �Լ��� ����� ��� ����
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
	printf("banana�� ����� ���� �ּ� �� : %p\n", "banana");
	printf("�� ��° ������ �ּ� �� : %p\n", "banana" + 1);
	printf("ù ��° ���� : %c\n", *"banana");
	printf("�� ��° ���� : %c\n", *("banana"+1));
	printf("�迭�� ǥ���� �� ��° ���� : %c\n", "banana"[2]);

	return;
}

void pointer_str()
{
	char* desert = "hamberger";
	printf("���� �Ľ��� %s.\n", desert);
	desert = "pizza";
	printf("���� �Ľ��� %s.\n", desert);

	return;
}

void scanf_str()
{
	//char *str = malloc(sizeof(char) * 80);
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("ù ��° �ܾ� : %s\n", str);
	scanf("%s", str);
	printf("���ۿ� �����ִ� �� ��° �ܾ� : %s\n", str);
	free(str);

	return;
}

void get_str()
{
	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str);
	printf("�Է��� ���ڿ��� %s �Դϴ�.", str);

	return;
}

void fgets_str()
{
	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);
	printf("�Է��� ���ڿ��� %s �Դϴ�.", str);

	return;
}

//���๮�ڷ� ���� gets �Է� ������
void problem_buffer()
{
	int age;
	char name[20];
	printf("���� : ");
	scanf_s("%d", &age);
	printf("�̸� : ");
	gets(name);
	printf("���̴� %d, �̸��� %s�Դϴ�.\n", age, name);

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

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);

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

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}
	else
	{
		resp = str2;
	}
	printf("�̸��� �� ������ : %s\n", resp);

	return;
}

void compare_str()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
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
