#include <stdio.h>

struct student {
	int num;
	double grade;
};
typedef struct student Student;

void print_data(Student* ps) {
	printf("학번: %d\n", ps->num);
	printf("학점: %.1lf\n", ps->grade);
}

int example12(void) {
	Student s1 = { 315, 4.3 };
	print_data(&s1);

	return 0;
}