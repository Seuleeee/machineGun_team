#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
	int *pi;
	double *pd;

	pi = (int *)malloc(sizeof(int));
	if (pi == NULL)
	{
		printf("# �޸� ����\n");
		exit(1);
	}
	pd = (double *)malloc(sizeof(double));
	*pi = 10;
	*pd = 3.4;

	printf("������ ��� : %d\n", *pi);
	printf("�Ǽ��� ��� : %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;
}*/

/*
int main()
{
	int *pi;
	int i, sum = 0;

	pi = (int *)malloc(5 * sizeof(int));
	if (pi == NULL)
	{
		printf("�޸� ����\n");
		exit(1);
	}
	printf("�ټ��� ���� �Է� : ");
	for (i = 0;i < 5; i++)
	{
		scanf_s("%d", &pi[i]);
		sum += pi[i];
	}
	printf("�ټ��� ��� ���� : %.1lf\n", (sum / 5.0));
	free(pi);
	return 0;
}*/

/*
int main()
{
	int *pi;
	int size = 5;
	int count = 0;
	int num;
	int i;

	pi = (int *)calloc(size, sizeof(int));
	while (1) {
		printf("����� �Է� => ");
		scanf_s("%d", &num);
		if (num <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int *)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);
	return 0;
}*/
/*
int main()
{
	char temp[80];
	char *str[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���ڿ� �Է� : ");
		gets(temp);
		str[i] = (char *)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]);
	}
	return 0;
}*/

/*
void print_str(char **ps);
int main()
{
	char temp[80];
	char *str[21] = { 0 };
	int i = 0;

	while (i < 20)
	{
		printf("���ڿ� �Է� : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)break;
		str[i] = (char *)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}
	print_str(str);
	for (i = 0; str[i] != NULL; i++)
	{
		free(str[i]);
	}
	return 0;
}
void print_str(char **ps)
{
	while (*ps != NULL)
	{
		printf("%s\n", *ps);
		ps++;
	}
}*/

/*
int main(int argc, char **argv)
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}*/