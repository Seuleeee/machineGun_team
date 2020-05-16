#include <stdio.h>

int example1(void)
{
	int score[3][4];
	int total;
	double avg;
	int i, j;
	for (i = 0; i < 3; i++) {
		printf("4°ú¸ñÀÇ Á¡¼ö : ");
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
		printf("ÃÑÁ¡ :%d, Æò±Õ:%.2;f\n", total, avg);
	}

	return 0;
}