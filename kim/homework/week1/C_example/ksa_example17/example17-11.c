#include <stdio.h>

enum season {
	SPRING,
	SUMMER,
	FALL,
	WINTER
};

int example11(void) {
	
	enum season ss;
	char* pc = NULL;
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
	default:
		break;
	}
	
	printf("leisure sports => %s\n ",pc);

	return 0;
}
