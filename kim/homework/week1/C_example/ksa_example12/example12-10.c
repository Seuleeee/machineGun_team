#include <stdio.h>
#include <string.h>

int example10(void) {
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strcat(str, "piece", 3);
	printf("%s\n", str);

	return 0;
}