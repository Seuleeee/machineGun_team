#include <stdio.h>
#define VER 7
#define BIT16

int example6(void)
{
	int max;

#if VER>=6
	printf("���� %d\n",VER);
#endif
#ifdef BIT16
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int�� ���� �ִ밪 %d\n", max);

	return 0;
}