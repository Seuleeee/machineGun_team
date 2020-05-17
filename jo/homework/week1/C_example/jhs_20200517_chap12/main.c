#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "function.h"

int main(void)
{
	const_str();
	pointer_str();
	//scanf_str(); //위치를 기록하는 동안 액세스 위반이 발생했습니다
	get_str();
	fgets_str();
	problem_buffer();
	output_str();
	strcpy_str();
	strncpy_str();
	cat_str();
	strlen_str();
	compare_str();

	return 0;
}