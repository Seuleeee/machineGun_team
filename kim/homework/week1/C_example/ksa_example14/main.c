#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	while (1)
	{
		printf("�� �� ������ �����ұ�� (1~11) : ");
		scanf("%d", &i);
		if (i < 1 || i > 7) {
			printf("���� �����Դϴ�,,");
			break;
		}

		switch (i)
		{
		case 1:
			example1();
			continue;

		case 2:
			example2();
			continue;

		case 3:
			example3();
			continue;

		case 4:
			example4();
			continue;

		case 5:
			example5();
			continue;

		case 6:
			example6();
			continue;

		case 7:
			example7();
			continue;

	}
}