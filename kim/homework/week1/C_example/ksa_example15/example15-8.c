#include <stdio.h>

void func(int (*fp)(int, int)) {
	int a, b;
	int res;

	printf(" �� ���� �Է� ");
	scanf("%d%d", &a, &b);
	res = fp(a, b);
	printf("�����:%d\n", res);
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

	printf(" 1. ��\n");
	printf(" 2. ��\n");
	printf(" 3. ū ��\n");
	printf("���ϴ� ���� ����");
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