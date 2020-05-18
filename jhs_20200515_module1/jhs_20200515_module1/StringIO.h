#pragma once
#include <stdio.h>
#include <string.h>

void string_IO()
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);
	puts("입력된 문자열 : ");
	puts(str);

	return;

}