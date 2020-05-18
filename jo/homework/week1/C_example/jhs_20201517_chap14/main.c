#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//14-1
	/*int score[3][4];
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (j = 0; j < 4; j++)
		{
			scanf_s("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)
	{
		total = 0;
		for (j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.3lf\n", total, avg);
	}*/

	//14-2
	/*int num[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}
	};

	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", num[i][j]);
		}
		
		printf("\n");
	}*/

	// 14-3
	/*char animal[5][20];
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}
	for (i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}*/

	//14-4 //쓰레기값 출력됨.
	/*char animal1[4][10] = {
		{'d', 'o', 'g', '\0'},
		{'c', 'a', 't', '\0'},
		{'b', 'i', 'r', 'd', '\0'},
		{'m', 'a', 'n', '\0'},
	};

	char animal2[][10] = { "dog", "cat", "bird", "man" };
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%s ", animal2[i]);
	}*/

	//14-5
	/*int score[2][3][4] = {
		{{12,31,24,65}, {57, 45, 24, 83}, {15, 19, 20, 39}},
		{{43, 54, 523, 23}, {314, 324, 21,7645}, {23, 12,75,1234}}
	};

	int i, j, k;

	for (i = 0; i < 2; i++)
	{
		printf("%d반 점수...\n", i + 1);
		for (j = 0; j < 3; j++)
		{
			for (k=0; k<4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}*/

	//14-6
	/*char* pary[3];
	int i;
	int count = sizeof(pary) / sizeof(int);

	pary[0] = "dog";
	pary[1] = "cat";
	pary[2] = "man";

	for (i = 0; i < count; i++)
	{
		printf("%s\n", pary[i]);
	}*/

	//14-7
	int ary1[4] = {1, 2, 3, 4};
	int ary2[4] = {11, 12, 13, 14};
	int ary3[4] = {21, 22, 23, 24};
	int *pary[3] = { ary1, ary2, ary3 };
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j=0; j<4; j++)
		{
			printf("%5d", pary[i][j]);
		}
		printf("\n");
	}


	return 0;
}