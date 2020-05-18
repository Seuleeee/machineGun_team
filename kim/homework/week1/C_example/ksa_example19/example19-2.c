#include <stdio.h>
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed!"
#define ERR_PRN printf("out of range!\n")

int example2(void)
{
	double radius, area;

	printf("input radius(under 100) : ");
	scanf("%1f", &radius);
	area = PI * radius * radius;
	if (radius > LIMIT) ERR_PRN;
	else printf("¸éÀû: %.2lf (%s)\n", area, MSG);

	return 0;
}