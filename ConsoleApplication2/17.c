#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*
struct student
{
	int num;
	double grade;
};
int main()
{
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;

	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}*/

/*
struct profile
{
	char name[20];
	int age;
	double height;
	char *intro;
};
int main()
{
	struct profile yuni;
	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char *)malloc(80);
	printf("자기소개 : ");
	gets(yuni.intro);

	printf("이름 : %s\n", yuni.name);
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}*/

/*
struct profile
{
	int age;
	double height;
};
struct student
{
	struct profile pf;
	int id;
	double grade;
};
int main()
{
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1f\n", yuni.grade);

	return 0;
}*/

/*
struct student
{
	int id;
	char name[20];
	double grade;
};
int main()
{
	struct student s1 = { 315,"홍길동",2.4 },
		s2 = { 316,"이순신",3.7 },
		s3 = { 317,"세종대왕",4.4 };

	struct student max;
	max = s1;
	if (s2.grade > max.grade)max = s2;
	if (s3.grade > max.grade)max = s3;

	printf("학번 : %d\n", max.id);
	printf("이름 : %s\n", max.name);
	printf("학점 : %.1lf\n", max.grade);

	return 0;
}*/

/*
struct vision {
	double left;
	double right;
};
struct vision exchange(struct vision robot);
int main()
{
	struct vision robot;

	printf("시력 입력 : ");
	scanf_s("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}
struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}*/

/*
struct score
{
	int kor;
	int eng;
	int math;
};
int main()
{
	struct score yuni = { 90,80,70 };
	struct score *ps = &yuni;

	printf("국어 : %d\n", (*ps).kor);
	printf("영어 : %d\n", ps->eng);
	printf("수학 : %d\n", ps->math);

	return 0;
}*/

/*
struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};
int main()
{
	struct address list[5] = {
		{"홍길동",23,"111-1111","울릉도 독도"},
	{"이순신", 35, "222-2222", "서울 건천동"},
	{"장보고",19,"333-3333","완도 청해진"},
	{"유관순", 15, "444-4444", "충남 천안"},
	{"안중근",45,"555-5555","황해도 해주"}
	};
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", 
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	return 0;
}*/

/*
struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};
void print_list(struct address *lp);
int main()
{
	struct address list[5] = {
		{ "홍길동",23,"111-1111","울릉도 독도" },
		{ "이순신", 35, "222-2222", "서울 건천동" },
		{ "장보고",19,"333-3333","완도 청해진" },
		{ "유관순", 15, "444-4444", "충남 천안" },
		{ "안중근",45,"555-5555","황해도 해주" }
	};
	print_list(list);
	return 0;
}
void print_list(struct address *lp)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n",
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}*/

/*
struct list {
	int num;
	struct list *next;
};
int main()
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list *head = &a, *current;

	a.next = &b;
	b.next = &c;

	printf("head -> num : %d\n", head->num);
	printf("head -> head : %d\n", head->next->num);
	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");

	return 0;
}*/

/*
union student
{
	int num;
	double grade;
};
int main()
{
	union student s1 = { 315 };
	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);

	return 0;
}*/

/*
enum season {SPRING,SUMMER,FALL,WINTER};
int main() {
	enum season ss;
	char *pc = NULL;
	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저활동 : %s\n", pc);
	return 0;
}*/

/*
struct student
{
	int num;
	double grade;
};
typedef struct student Student;
void print_data(Student *ps);
int main()
{
	Student s1 = { 315,4.2 };
	print_data(&s1);
	return 0;
}
void print_data(Student *ps)
{
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
}*/