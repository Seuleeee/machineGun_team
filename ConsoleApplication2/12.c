#include<stdio.h>
#include<string.h>
/*
int main()
{
	printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
	printf("�ι��� ���� �ּ� �� : %p\n", "apple" + 1);
	printf("ù ��° ���� : %c\n", *"apple");
	printf("�� ��° ���� : %c\n", *("apple" + 1));
	printf("�迭�� ǥ���� ����° ���� : %c\n", "apple"[2]);
	printf("�׹�° ���� : %c\n", *("apple" + 3));
	printf("�ټ���° ���� : %c\n", "apple"[4]);
	
	return 0;
}*/

/*
int main()
{
	char *dess = "apple";

	printf("���� �Ľ��� %s��!\n", dess);
	dess = "cake";
	printf("���� �Ľ��� %s��!\n", dess);

	return 0;
}*/

/*
int main() {
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf_s("%s", str);
	printf("ù ��° �ܾ� : %s\n", str);
	scanf_s("%s", str);
	printf("���ۿ� ���� �ι�° �ܾ� : %s\n", str);

	return 0;
}*/

/*
int main() {
	char str[80];

	printf("���� ���Ե� ���ڿ� �Է� : ");
	gets(str);
	printf("�Է��� ���ڿ��� %s �̴�", str);

	return 0;
}*/

/*
int main()
{
	char str[80];
	printf("���� ���� ���ڿ� �Է� : ");
	fgets(str, sizeof(str), stdin);

	printf("�Էµ� ���ڿ��� %s�̴�.\n", str);

	return 0;
}*/

/*
int main()
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf_s("%d", &age);

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}*/

/*
int main() {
	char str[80] = "apple juice";
	char *ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}*/

/*
int main() {
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char *ps1 = "banana";
	char *ps2 = str2;

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2);
	printf("�ٲ� ���ڿ� : %s\n", str1);
	strcpy(str1, ps1);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2);
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana");
	printf("�ٲ� ���ڿ� : %s\n", str1);

	return 0;
}*/

/*
int main() {
	char str[20] = "mango tree";
	strncpy(str, "apple-pie", 5);
	printf("%s\n", str);
	return 0;
}*/

/*
int main() {
	char str[80] = "straw";

	strcat(str, "berry");
	printf("%s\n", str);
	strncat(str, "piece", 3);
	printf("%s\n", str);
	strncat(str, "jam", 3);
	printf("%s\n", str);
	strcat(str, "pie");
	printf("%s\n", str);

	return 0;
}*/

/*
int main() {
	char str1[80], str2[80];
	char *resp;

	printf("2�� ���� �Է� : ");
	scanf_s("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}
	else 
		resp = str2;
	printf("�̸� �� ������ : %s\n", resp);
	return 0;
}*/

/*
int main() {
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� : ");
	if (strcmp(str1, str2) > 0)
	{
		printf("%s\n", str2);
	}
	else printf("%s\n", str2);
	return 0;
}*/