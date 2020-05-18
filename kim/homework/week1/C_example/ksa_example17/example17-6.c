#include <stdio.h>

struct score {
	int kor;
	int eng;
	int math;
};

int example6(void)
{
	struct score yuni = { 90, 80, 70 };
	struct score* ps = &yuni;
	
	printf("kor : %d\n", (*ps).kor);
	printf("eng : %d\n", ps -> eng);
	printf("math : %d\n", ps -> math);

	return 0;
}