#include <stdio.h>

void func(int (*fp)(int, int)) {
	int a, b;
	int res;

	printf(" 두 정수 입력 ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("결과값:%d\n", res);
}
int sum2(int a, int b) {
	return a + b;
}
int mul(int a, int b) {
	return a * b;
}
int max(int a, int b) {
	return a > b ? a : b;
}

int example8(void)
{
	int sel;

	printf(" 1. 합\n");
	printf(" 2. 곱\n");
	printf(" 3. 큰 값\n");
	printf("원하는 연산 선택");
	scanf("%d", &sel);

	switch (sel)
	{
	case 1:
		func(sum2);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
		break;

	default:
		break;
	}

	return 0;
}