#include <stdio.h>

int example10(void)
{
	FILE* fp;
	int age;
	char name[20];

	fp = fopen("a.txt", "r");

	fscanf(fp, "%d", &age);
	while (fgetc(fp) != '\n') {}
	fgets(name, sizeof(name), fp);

	printf("age: %d, name: %s", age, name);
	fclose(fp);

	return 0;
}