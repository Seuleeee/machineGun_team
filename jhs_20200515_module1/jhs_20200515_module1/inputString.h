#pragma once
#include <stdio.h>
#include <string.h>

void input_string()
{

	char str1[80] = "dog";
	char str2[80];

	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);

	return;

}