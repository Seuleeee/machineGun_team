#include<stdio.h>
#include<string.h>
/*
int main()
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
	printf("두번쨰 문자 주소 값 : %p\n", "apple" + 1);
	printf("첫 번째 문자 : %c\n", *"apple");
	printf("두 번째 문자 : %c\n", *("apple" + 1));
	printf("배열로 표현한 세번째 문자 : %c\n", "apple"[2]);
	printf("네번째 문자 : %c\n", *("apple" + 3));
	printf("다섯번째 문자 : %c\n", "apple"[4]);
	
	return 0;
}*/

/*
int main()
{
	char *dess = "apple";

	printf("오늘 후식은 %s다!\n", dess);
	dess = "cake";
	printf("내일 후식은 %s다!\n", dess);

	return 0;
}*/

/*
int main() {
	char str[80];

	printf("문자열 입력 : ");
	scanf_s("%s", str);
	printf("첫 번째 단어 : %s\n", str);
	scanf_s("%s", str);
	printf("버퍼에 남은 두번째 단어 : %s\n", str);

	return 0;
}*/

/*
int main() {
	char str[80];

	printf("공백 포함된 문자열 입력 : ");
	gets(str);
	printf("입력한 문자열은 %s 이다", str);

	return 0;
}*/

/*
int main()
{
	char str[80];
	printf("공백 포함 문자열 입력 : ");
	fgets(str, sizeof(str), stdin);

	printf("입력된 문자열은 %s이다.\n", str);

	return 0;
}*/

/*
int main()
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf_s("%d", &age);

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

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

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);
	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

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

	printf("2개 과일 입력 : ");
	scanf_s("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2))
	{
		resp = str1;
	}
	else 
		resp = str2;
	printf("이름 긴 과일은 : %s\n", resp);
	return 0;
}*/

/*
int main() {
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 : ");
	if (strcmp(str1, str2) > 0)
	{
		printf("%s\n", str2);
	}
	else printf("%s\n", str2);
	return 0;
}*/