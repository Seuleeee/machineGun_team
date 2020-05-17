#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	//18-1
	/*FILE* fp;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 안열립니다.\n");
		return 1;
	}
	printf("파일이 열립니다.");
	fclose(fp);*/

	//18-2
	/*FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 안열립니다.\n");
		return 1;
	}
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	fclose(fp);*/

	//18-3
	/*FILE* fp;
	char str[] = "banana";
	int i;

	fp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "w");
	if (fp == NULL)
	{
		printf("파일이 안열립니다.\n");
		return 1;
	}
	i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);*/

	//18-4
	/*int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}*/

	//18-5
	/*int ch;

	while (1)
	{
		ch = fgetc(stdin);
		if (ch == EOF)
		{
			break;
		}
		fputc(ch, stdout);
	}*/

	//18-6
	/*FILE* fp;
	int ary[5] = { 123, 234, 32, 243, 12 };
	int i, res;

	fp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc(ary[i], fp);
	}
	fclose(fp);
	fp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "rt");
	while (1)
	{
		res = fgetc(fp);
		if (res == EOF)
		{
			break;
		}
		printf("%4d", res);
	}
	fclose(fp);*/

	//18-7
	/*FILE* fp;
	char str[20];
	
	fp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "rt");
	if (fp == NULL)
	{
		printf("파일이 안열립니다.\n");
		return 1;
	}
	while (1)
	{
		printf("과일 이름 : ");
		scanf("%s", str);
		if (strcmp(str, "end") == 0)
		{
			break;
		}
		else if (strcmp(str, "list") == 0)
		{
			fseek(fp, 0, SEEK_SET);
			while (1)
			{
				fgets(str, sizeof(str), fp);
				if (feof(fp))
				{
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
	fclose(fp);*/

	//18-8
	/*FILE* ifp, * ofp;
	char str[80];
	char* res;

	ifp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 못열었다.\n");
		return 1;
	}
	ofp = ifp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "w");
	if (ifp == NULL)
	{
		printf("출력 파일을 못열었다.\n");
		return 1;
	}
	while (1)
	{
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL)
		{
			break;
		}
		str[strlen(str) - 1] = '\0';
		fputs(str, ofp);
		fputs(" ", ofp);
	}
	fclose(ifp);
	fclose(ofp);*/

	//18-9
	/*FILE* ifp, * ofp;
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;

	ifp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일을 못열었다.\n");
		return 1;
	}
	ofp = ifp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "w");
	if (ifp == NULL)
	{
		printf("출력 파일을 못열었다.\n");
		return 1;
	}

	while (1)
	{
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
		if (res == EOF)
		{
			break;
		}
		total = kor + eng + math;
		avg = total / 3.0;
		fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
	}
	fclose(ifp);
	fclose(ofp);*/

	//18-10
	/*FILE* fp;
	int age;
	char name[20];

	fp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "r");

	fscanf(fp, "%d", &age);
	fgets(name, sizeof(name), fp);

	printf("나이 : %d, 이름 : %s", age, name);
	fclose(fp);*/

	//18-11
	FILE* afp, * bfp;
	int num = 10;
	int res;

	afp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "wt");
	fprintf(afp, "%d", num);

	bfp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);

	fclose(afp);
	fclose(bfp);

	bfp = fopen("C:\\Users\\BRYANT\\source\\repos\\jhs_20200517_chap18\\test.txt", "wb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);
	fclose(bfp);

	return 0;
}