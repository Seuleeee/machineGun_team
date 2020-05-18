#include <stdio.h>

struct student {
	int id;
	char name[20];
	double grade;
};

int example4(void)
{
	struct student
		s1 = { 315, "hong", 2.4 },
		s2 = { 316, "lee", 3.7 },
		s3 = { 317, "sejong", 4.5 };

	struct student max;
	max = s1;
	if (s2.grade > max.grade) {
		max = s2;
	}
	if (s3.grade > max.grade) {
		max = s3;
	}

	printf("학번: %d\n", max.id);
	printf("이름: %s\n", max.name);
	printf("학점: %.1lf\n", max.grade);

	return 0;
}