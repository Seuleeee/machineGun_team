#include <stdio.h>

int example1(void)
{
	int score[3][4];
	int total;
	double avg;
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("4������ ���� : ");
		for (j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		total = 0;
		for (j = 0; j < 4; j++) {
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("���� :%d, ���:%.2;f\n", total, avg);
	}

	return 0;
}