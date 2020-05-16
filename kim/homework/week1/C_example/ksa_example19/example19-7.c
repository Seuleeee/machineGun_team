#include <stdio.h>
#pragma pack(push, 1)
typedef struct {
	char ch;
	int in;
} Sample1;

#pragma pack(pop)
typedef struct {
	char ch;
	int in;
} Sample2;

int example7(void)
{
	printf("Sample1 Size: %d Byte \n", sizeof(Sample1));
	printf("Sample2 Size: %d Byte \n", sizeof(Sample2));

	return 0;
}