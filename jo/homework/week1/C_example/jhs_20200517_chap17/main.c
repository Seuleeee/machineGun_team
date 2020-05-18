#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile
{
	char name[20];
	int age;
	double height;
	char* intro;
};
struct student
{
	//struct profile pf;
	int id;
	char name[20];
	//int num;
	double grade;
};
struct vision
{
	double left;
	double right;
};
struct vision exchange(struct vision robot);

struct score
{
	int kor;
	int eng;
	int math;
};

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

struct list
{
	int num;
	struct list* next;
};

union student2
{
	int num;
	double grade;
};

struct student3
{
	int num;
	double grade;
};

enum season { spring, summer, autumn, winter};

typedef struct student3 Student3;
void print_data(Student3* ps);

void print_list(struct address* lp);

int main(void)
{
	//17-1
	/*struct student s1;
	s1.num = 2;
	s1.grade = 4.3;
	printf("학번은 %d, 학점은 %.1lf", s1.num, s1.grade);*/

	//17-2
	/*struct profile Seuleeee;

	strcpy(Seuleeee.name, "한슬조");
	Seuleeee.age = 28;
	Seuleeee.height = 188;
	Seuleeee.intro = (char*)malloc(80);
	printf("자기소개 : ");
	gets(Seuleeee.intro);

	printf("이름 : %s\n", Seuleeee.name);
	printf("나이 : %d\n", Seuleeee.age);
	printf("키 : %.1lf\n", Seuleeee.height);
	printf("자기소개 : %s\n", Seuleeee.intro);
	free(Seuleeee.intro);*/

	//17-3
	/*struct student Seuleeee;
	Seuleeee.pf.age = 28;
	Seuleeee.pf.height = 188;
	Seuleeee.id = 1224;
	Seuleeee.grade = 3.3;

	printf("나이 : %d\n", Seuleeee.pf.age);
	printf("키 : %.1lf\n", Seuleeee.pf.height);
	printf("학번 : %d\n", Seuleeee.id);
	printf("학점 : %.2lf\n", Seuleeee.grade);*/

	//17-4
	/*struct student s1 = { 315, "제임스고슬링", 2.1 },
	s2 = { 316, "빌게이츠", 3.7 },
	s3 = { 317, "세르게이브린", 1.8 };

	struct student max;

	max = s1;
	if (s2.grade > max.grade)
	{
		max = s2;
	}
	if (s3.grade > max.grade)
	{
		max = s3;
	}
	max.id = s1.id;
	strcpy(max.name, s1.name);
	max.grade = s1.grade;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);*/

	//17-5
	/*struct vision robot;
	printf("시력을 입력하시오. : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);*/

	//17-6
	/*struct score seuleeee = { 100, 99, 98 };
	struct score* ps = &seuleeee;
	printf("국, 영, 수 : %d,%d,%d", (*ps).kor, ps -> eng, ps-> math);*/

	//17-7
	/*struct address list[4] = {
		{"이름1", 1, "111", "주소1"},
		{"이름2", 2, "222", "주소2"},
		{"이름3", 3, "333", "주소3"},
		{"이름4", 4, "444", "주소4"}
	};
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}*/

	//17-8
	/*struct address list[4] = {
		{"이름1", 1, "111", "주소1"},
		{"이름2", 2, "222", "주소2"},
		{"이름3", 3, "333", "주소3"},
		{"이름4", 4, "444", "주소4"}
	};
	print_list(list);*/

	//17-9
	/*struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 };
	struct list* head = &a, * current;
	a.next = &b;
	b.next = &c;
	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);
	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");*/

	//17-10
	/*union student2 s1 = { 315 };
	printf("학번 : %d\n", s1.num);
	s1.grade = 4.1;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);*/

	//17-11
	/*enum season ss;
	char* pc = NULL;
	ss = spring;

	switch (ss)
	{
	case spring:
		pc = "꽃";
		break;
	case summer:
		pc = "나무";
		break;
	case autumn:
		pc = "낙엽";
		break;
	case winter:
		pc = "가지";
		break;
	}
	printf("계절의 변화 => %s\n", pc);*/

	//17-12
	Student3 s1 = { 13, 2.2 };
	print_data(&s1);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}

void print_list(struct address* lp)
{
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%10s%5d%15s%20s\n", (lp+i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}

void print_data(Student3* ps)
{
	printf("학번 : %.1lf\n", ps -> num);
	printf("학점 : %d\n", ps -> grade);
}