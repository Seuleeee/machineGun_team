#include <stdio.h>

struct student {
	int num;
	double grade;
};

int example1(void)
{
	struct student sl;

	sl.num = 2;
	sl.grade = 2.9;
	printf("�й�: %d\n", sl.num);
	printf("����: %.1lf\n", sl.grade);

	return 0;
}