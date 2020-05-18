#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	while (1)
	{
		printf("몇 번 예제를 실행할까요 (1~11) : ");
		scanf("%d", &i);
		if (i < 1 || i > 12) {
			printf("없는 예제입니다,,");
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

		case 8:
			example8();
			continue;

		case 9:
			example9();
			continue;

		case 10:
			example10();
			continue;

		case 11:
			example11();
			continue;
		
		case 12:
			example12();
			continue;
		}
	}
}