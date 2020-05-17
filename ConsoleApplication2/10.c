#include<stdio.h>
/*
int main() {

	int arr[3];
	int i;

	*(arr + 0) = 10;
	*(arr + 1) = *(arr + 0) + 10;

	printf("세번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", arr + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(arr + i));
	}
	return 0;
}*/

/*
int main() {

	int arr[3];
	int *pa = arr;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1]; 

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
	return 0;
}*/

 /*
int main() {
	int arr[3] = {10, 20 ,30};
	int *pa = arr;
	int i;

	printf("배열 값 :");
	
	for (i = 0; i < 3; i++)
	{
		printf("%5d", *pa);
		pa++;
	}
	return 0;
}*/

/*
int main()
{
	int arr[5] = {10, 20,30,40,50};
	int *pa = arr;
	int *pb =pa+ 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);

	pa++;
	printf("pb - pa : %u\n", pb - pa);

	printf("앞에있는 배열 요소 값 : ");
	if (pa < pb)printf("%d\n", *pa);
	else printf("%d\n", *pb);
	return 0;
}*/

/*
void print_ary(int *pa);
int main() {

	int arr[5] = { 10,20,30,40,50 };
	print_ary(arr);
	return 0;
}
void print_ary(int *pa)
{
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%5d", pa[i]);
	}
}*/

/* //배열 값 출력
void print_ary(int *pa, int size);
int main()
{
	int arr1[5] = { 10,20,30,40,50 };
	int arr2[7] = { 10,20,30,40,50,60,70 };

	print_ary(arr1, 5);
	printf("\n");
	print_ary(arr2, 7);

	return 0;
}
void print_ary(int *pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%5d", pa[i]);
	}
}*/

/* //값 입력 받고 배열 최댓값 찾기
void input_ary(double *pa, int size);
double find_max(double *pa, int size);
int main() {
	double arr[5];
	double max;
	int size = sizeof(arr) / sizeof(arr[0]);

	input_ary(arr, size);
	max = find_max(arr, size);
	printf("배열 최댓값 : %.lf\n", max);

	return 0;
}
void input_ary(double *pa, int size)
{
	int i;

	printf("%d 개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++) 
	{
		scanf_s("%lf", pa + i);
	}
}
double find_max(double *pa, int size)
{
	double max;
	int i;

	max = pa[0];
	for (i = 0; i < size; i++) 
	{
		if (pa[i] > max) {
			max = pa[i];
		}
	} return max;
}*/