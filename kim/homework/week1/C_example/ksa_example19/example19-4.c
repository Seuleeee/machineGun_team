#include <stdio.h>

void func(void) {
	printf("\n");
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %s\n", __LINE__);
}

int example4(void)
{
	printf("compile date and time: %s, %s\n\n", __DATE__, __TIME__);
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %s\n", __LINE__);

#line 100 "macro.c"
	func();

	return 0;
}