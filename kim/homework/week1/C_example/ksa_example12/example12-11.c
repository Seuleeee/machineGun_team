#include <stdio.h>
#include <string.h>

int example11(void) {
	char str1[100], str2[80];
	char* resp;

	printf("2���� ���� �̸� �Է�: ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;

	printf("�̸��� �� ������? -> %s\n", resp);

	return 0;
}
