#include <stdio.h>

int example7(void)
{
	int num, grade;

	printf("�й� �Է�: ");
	scanf("%d", &num);
	getchar();
	printf("���� �Է�: ");
	grade = getchar();
	printf("�й�: %d, ����: %c", num, grade);

	return 0;
}