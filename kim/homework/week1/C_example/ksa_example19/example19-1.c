#include <stdio.h>
#include "student.h"

int example1(void)
{
	Student a = { 315, "hong" };
	printf("�й�: %d, name: %s\n", a.num, a.name);

	return 0;
}