#include <stdio.h>

int example5(void)
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);

	return 0;
}