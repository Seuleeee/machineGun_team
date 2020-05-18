#include <stdio.h>
#include <stdlib.h>

int example3(void)
{
	int* pi;
	int size = 5;
	int count = 0;
	int i, num;

	pi = (int*)calloc(size, sizeof(int));
	while(1) {
		printf("양수 입력 =>");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size) {
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int));
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++) {
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
}