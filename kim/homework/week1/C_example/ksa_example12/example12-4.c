#include <stdio.h>

int example4(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�: ");
	gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

	return 0;
}