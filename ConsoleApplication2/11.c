#include<stdio.h>
/*
int main() {
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{       //�빮��G     32 
		small = cap + ('a' - 'A'); // �ҹ���a-�빮��A�� 32����
	}//small���� �빮��G�� 32���ؼ� �ҹ���g�� ����
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);

	return 0;
}*/             
/*
int main(void)
{
	char ch1, ch2;

	scanf_s("%c%c", &ch1, &ch2);

	printf("[%c%c]", ch1, ch2);

	return 0;
}*/
/*
int main() {
	int ch;

	ch = getchar();
	printf("�Է� ���� : ");
	putchar(ch);
	putchar('\n');

	return 0;
}*/

/*
int main() {
	
	char ch;
	int i;

	for (i = 0; i < 3; i++) //����� �����ۿ��ȵ�
	{
		scanf_s("%c", &ch);
		printf("%c", ch);
	}
	return 0;
}*/

/*
int main() {
	int res;
	char ch;

	while (1)
	{
		res = scanf_s("%c", &ch);
		if (res == -1) break;
		printf("%d ", ch);
	}
	return 0;
}*/

/*
void my_gets(char *str, int size);
int main()
{
	char str[7];

	my_gets(str, sizeof(str));
	printf("�Է� ���ڿ� : %s\n", str);

	return 0;
}
void my_gets(char *str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1)) //size=7 size-1=6
	{//i=0 ~ 6����
		str[i] = ch;
		i++;
		ch = getchar();
	}
	str[i] = '\0';
}*/

/*
int main()
{
	int num, grade;

	printf("�й� �Է� : ");
	scanf_s("%d", &num);
	getchar();
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}*/