#include <stdio.h>
#include <string.h>

int example8(void)
{
	FILE* ifp, * ofp;
	char str[80];
	char* res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) {
		printf("cannot open input file.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL) {
		printf("cannot open output file.\n");
		return 1;
	}

	while (1) {
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL) {
			break;
		}
		str[strlen(str) - 1] = '\0';
		fputs(str, ofp);
		fputs(" ", ofp);
	}
	fclose(ifp);
	fclose(ofp);

	return 0;
}