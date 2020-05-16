#include <stdio.h>

int example11(void)
{
	FILE* afp, * bfp;
	int res, num = 10;

	afp = fopen("a.txt", "wt");
	fprintf(afp, "%d", num);

	bfp = fopen("b.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	return 0;
}