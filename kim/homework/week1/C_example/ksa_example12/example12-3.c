#include <stdio.h>

int example3(void)
{
	char str[80];

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("첫 번째 단어: %s\n", str);
	scanf("%s", str);
	printf("두 번째 단어: %s\n", str);

	return 0;
}