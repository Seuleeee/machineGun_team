#include<stdio.h>
/*
int main() {
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{       //대문자G     32 
		small = cap + ('a' - 'A'); // 소문자a-대문자A는 32차이
	}//small에는 대문자G에 32더해서 소문자g가 나옴
	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small);

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
	printf("입력 문자 : ");
	putchar(ch);
	putchar('\n');

	return 0;
}*/

/*
int main() {
	
	char ch;
	int i;

	for (i = 0; i < 3; i++) //입출력 세개밖에안됨
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
	printf("입력 문자열 : %s\n", str);

	return 0;
}
void my_gets(char *str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();
	while ((ch != '\n') && (i < size - 1)) //size=7 size-1=6
	{//i=0 ~ 6까지
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

	printf("학번 입력 : ");
	scanf_s("%d", &num);
	getchar();
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}*/