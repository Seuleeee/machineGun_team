#include <stdio.h>
#define SUM(a,b)((a)+(b))
#define MUL(a,b)((a)*(b))

int example3(void)
{
	int res, a = 10, b = 20, x = 30, y = 40;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5);
	printf("res: %d\n", res);

	return 0;
}