#pragma once
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void ascii();
void input_scanf();
void getchar_putchar();
void process_scanf();
void using_sacnf();
void my_gets(char* str, int size);
void input_getchar();
void delete_buffer();

void ascii()
{
	char small, cap = 'G';

	if ((cap >='A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);

	return;
}

void input_scanf()
{
	char ch1, ch2;

	scanf_s("%c%c", &ch1, &ch2);
	printf("[%c%c]", ch1, ch2);

	return;
}

void getchar_putchar()
{
	int ch;
	ch = getchar();
	printf("�Է��� ���� : ");
	putchar(ch);
	putchar('\n');
	return;
}

void process_scanf()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++)
	{
		scanf_s("%c", &ch);
		printf("%c", ch);
	}

	return;
}

void using_sacnf()
{
	int res;
	char ch;

	while (1)
	{
		res = scanf_s("%c", &ch);
		if (res == -1)
		{
			break;
		}
		printf("%d ", ch);
	}

	return;
}

void input_getchar()
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("�Է��� ���ڿ� : %s\n", str);

	return;
}

void my_gets(char* str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size -1))
	{
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\n';

	return;
}

void delete_buffer()
{
	int num, grade;

	printf("�й� �Է� : ");
	scanf_s("%d", &num);
	getchar();
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, %c", num, grade);

	return;
}
