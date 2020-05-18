#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

extern int count;
extern int total;

double avg_data(void)
{
	double avg = total / (double)count;
	return avg;
}
