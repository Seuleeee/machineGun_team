#include <stdio.h>

int example9(void)
{
	FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math, total, res;
	double avg;

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
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
		if (res == EOF) {
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1f\n", name, total, avg);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}