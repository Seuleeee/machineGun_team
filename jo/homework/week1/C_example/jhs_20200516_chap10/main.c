#include <stdio.h>
#include "array_and_pointer.h"

int main(void)
{
	int len = 3;
	calc_array(len);
	array_name(len);
	differ_pointer(len);
	calc_pointer();

	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 };

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, 7);

	return 0;
}