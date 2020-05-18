#include <stdio.h>

struct profile {
	int age;
	double height;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int example3(void)
{
	struct student yuni;

	yuni.pf.age = 17;
	yuni.pf.height = 199.9;
	yuni.id = 201411104;
	yuni.grade = 4.5;

	printf("나이: %d\n", yuni.pf.age);
	printf("  키: %.1lf\n", yuni.pf.height);
	printf("학번: %d\n", yuni.id);
	printf("학점: %.1lf\n", yuni.grade);

	return 0;
}