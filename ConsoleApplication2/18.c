#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
int main()
{
	FILE *fp;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("파일이 열리지 않음\n");
		return 1;
	}
	printf("파일이 열림\n");
	fclose(fp);
	return 0;
}*/

/*
int main()
{
	FILE *fp;
	int ch;

	fp = fopen("a.txt", "r");
	if (fp == NULL)
	{
		printf("file no\n");
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
	fclose(fp);
	return 0;
}*/

/*
int main()
{
	FILE *fp;
	char str[] = "banana";
	int i;

	fp = fopen("b.txt", "w");
	if (fp == NULL)
	{
		printf("파일 노\n");
		return 1;
	}
	i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);

	return 0;
}*/

/*
int main()
{
	int ch;

	while (1);
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	return 0;
}*/

/*
int main()
{
	int ch;
	while (1)
	{
		ch = fgetc(stdin);
		if (ch == EOF)
		{
			break;
		}
		fputc(ch, stdout);
	}
	return 0;
}*/

/*
int main()
{
	FILE *fp;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,1 };
	int i, res;

	fp = fopen("a.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc(arr[i], fp);
	}
	fclose(fp);
	fp = fopen("a.txt", "rt");
	while (1)
	{
		res = fgetc(fp);
		if (res == EOF)break;
		printf("%4d", res);
	}
	fclose(fp);

	return 0;
}*/

/*
int main() {
	FILE *fp;
	char str[20];
	fp = fopen("a.txt", "a+");
	if (fp == NULL)
	{
		printf("파일 노\n");
		return 1;
	}
	while (1)
	{
		printf("과일 이름 : ");
		scanf_s("%s", str);
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
	fclose(fp);
	return 0;
}*/
/*
int main()
{
	FILE *ifp, *ofp;
	char str[80];
	char *res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일 못열었다\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일 못열었음\n");
		return 1;
	}
	while (1);
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
	fclose(ofp);

	return 0;
}*/
/*
int main()
{
	FILE *ifp, *ofp;
	char name[20];
	int kor, eng, math;
	int total;
	double avg;
	int res;

	ifp = fopen("a.txt", "r");
	if (ifp == NULL)
	{
		printf("입력 파일 못열었다\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL)
	{
		printf("출력 파일 못열었음\n");
		return 1;
	}
	while (1);
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
	fclose(ofp);

	return 0;
}*/
/*
int main()
{
	FILE *afp, *bfp;
	int num = 10;
	int *res;

	afp = fopen("a.txt", "wt");
	fprintf(afp, "%d", num);
	
	bfp = fopen("b.txt", "wb");
	fwrite(&num, sizeof(num), 1, bfp);
	
	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb");
	fread(&res, sizeof(res), 1, bfp);
	printf("%d", res);

	fclose(bfp);

	return 0;
}*/