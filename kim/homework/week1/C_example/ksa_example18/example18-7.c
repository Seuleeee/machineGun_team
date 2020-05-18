#include <stdio.h>
#include <string.h>

int example7(void)
{
	FILE* fp;
	char str[20];


	fp = fopen("a.txt", "a+");
	if (fp == NULL) {
		printf("cannot create file.\n");
		return 1;
	}
	while (1) {
		printf("fruit: ");
		scanf("%s", str);
		if (strcmp(str, "ene") == 0) {
			break;
		}
		else if (strcmp(str, "list") == 0) {
			fseek(fp, 0, SEEK_SET);
			while (1)
			{
				fgets(str, sizeof(str), fp);
				if (feof(fp)) {
					break;
				}
				printf("%s", str);
			}
		}
		else
		{
			fprintf(fp, "%s\n", str);
		}
	}
	fclose(fp);

	return 0;
}