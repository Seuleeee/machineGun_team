#include <stdio.h>

void func(void) {
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %s\n", __LINE__);
}

int example4(void)
{
	printf("compile date and time: %s, %s\n\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %s\n", __LINE__);

#line 100 "macro.c"
	func();

	return 0;
}