#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*
int main() {

int arr[3];
int i;

*(arr + 0) = 10;
*(arr + 1) = *(arr + 0) + 10;

printf("����° �迭 ��ҿ� Ű���� �Է� : ");
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

printf("�迭 �� :");

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

printf("�տ��ִ� �迭 ��� �� : ");
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

/* //�迭 �� ���
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

/* //�� �Է� �ް� �迭 �ִ� ã��
void input_ary(double *pa, int size);
double find_max(double *pa, int size);
int main() {
double arr[5];
double max;
int size = sizeof(arr) / sizeof(arr[0]);

input_ary(arr, size);
max = find_max(arr, size);
printf("�迭 �ִ� : %.lf\n", max);

return 0;
}
void input_ary(double *pa, int size)
{
int i;

printf("%d ���� �Ǽ��� �Է� : ", size);
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

/*
int main() {
char small, cap = 'G';

if ((cap >= 'A') && (cap <= 'Z'))
{       //�빮��G     32
small = cap + ('a' - 'A'); // �ҹ���a-�빮��A�� 32����
}//small���� �빮��G�� 32���ؼ� �ҹ���g�� ����
printf("�빮�� : %c %c", cap, '\n');
printf("�ҹ��� : %c", small);

return 0;
}*/
/*
int main(void)
{
char ch1, ch2;

scanf_s("%c%c", &ch1, &ch2);

printf("[%c%c]", ch1, ch2);

return 0;
}*/
/*
int main() {
int ch;

ch = getchar();
printf("�Է� ���� : ");
putchar(ch);
putchar('\n');

return 0;
}*/

/*
int main() {

char ch;
int i;

for (i = 0; i < 3; i++) //����� �����ۿ��ȵ�
{
scanf_s("%c", &ch);
printf("%c", ch);
}
return 0;
}*/

/*
int main() {
int res;
char ch;

while (1)
{
res = scanf_s("%c", &ch);
if (res == -1) break;
printf("%d ", ch);
}
return 0;
}*/

/*
void my_gets(char *str, int size);
int main()
{
char str[7];

my_gets(str, sizeof(str));
printf("�Է� ���ڿ� : %s\n", str);

return 0;
}
void my_gets(char *str, int size)
{
int ch;
int i = 0;

ch = getchar();
while ((ch != '\n') && (i < size - 1)) //size=7 size-1=6
{//i=0 ~ 6����
str[i] = ch;
i++;
ch = getchar();
}
str[i] = '\0';
}*/

/*
int main()
{
int num, grade;

printf("�й� �Է� : ");
scanf_s("%d", &num);
getchar();
printf("���� �Է� : ");
grade = getchar();
printf("�й� : %d, ���� : %c", num, grade);

return 0;
}*/

/*
int main()
{
printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
printf("�ι��� ���� �ּ� �� : %p\n", "apple" + 1);
printf("ù ��° ���� : %c\n", *"apple");
printf("�� ��° ���� : %c\n", *("apple" + 1));
printf("�迭�� ǥ���� ����° ���� : %c\n", "apple"[2]);
printf("�׹�° ���� : %c\n", *("apple" + 3));
printf("�ټ���° ���� : %c\n", "apple"[4]);

return 0;
}*/

/*
int main()
{
char *dess = "apple";

printf("���� �Ľ��� %s��!\n", dess);
dess = "cake";
printf("���� �Ľ��� %s��!\n", dess);

return 0;
}*/

/*
int main() {
char str[80];

printf("���ڿ� �Է� : ");
scanf_s("%s", str);
printf("ù ��° �ܾ� : %s\n", str);
scanf_s("%s", str);
printf("���ۿ� ���� �ι�° �ܾ� : %s\n", str);

return 0;
}*/

/*
int main() {
char str[80];

printf("���� ���Ե� ���ڿ� �Է� : ");
gets(str);
printf("�Է��� ���ڿ��� %s �̴�", str);

return 0;
}*/

/*
int main()
{
char str[80];
printf("���� ���� ���ڿ� �Է� : ");
fgets(str, sizeof(str), stdin);

printf("�Էµ� ���ڿ��� %s�̴�.\n", str);

return 0;
}*/

/*
int main()
{
int age;
char name[20];

printf("���� �Է� : ");
scanf_s("%d", &age);

printf("�̸� �Է� : ");
gets(name);
printf("���� : %d, �̸� : %s\n", age, name);

return 0;
}*/

/*
int main() {
char str[80] = "apple juice";
char *ps = "banana";

puts(str);
fputs(ps, stdout);
puts("milk");

return 0;
}*/

/*
int main() {
char str1[80] = "strawberry";
char str2[80] = "apple";
char *ps1 = "banana";
char *ps2 = str2;

printf("���� ���ڿ� : %s\n", str1);
strcpy(str1, str2);
printf("�ٲ� ���ڿ� : %s\n", str1);
strcpy(str1, ps1);
printf("�ٲ� ���ڿ� : %s\n", str1);

strcpy(str1, ps2);
printf("�ٲ� ���ڿ� : %s\n", str1);

strcpy(str1, "banana");
printf("�ٲ� ���ڿ� : %s\n", str1);

return 0;
}*/

/*
int main() {
char str[20] = "mango tree";
strncpy(str, "apple-pie", 5);
printf("%s\n", str);
return 0;
}*/

/*
int main() {
char str[80] = "straw";

strcat(str, "berry");
printf("%s\n", str);
strncat(str, "piece", 3);
printf("%s\n", str);
strncat(str, "jam", 3);
printf("%s\n", str);
strcat(str, "pie");
printf("%s\n", str);

return 0;
}*/

/*
int main() {
char str1[80], str2[80];
char *resp;

printf("2�� ���� �Է� : ");
scanf_s("%s%s", str1, str2);
if (strlen(str1) > strlen(str2))
{
resp = str1;
}
else
resp = str2;
printf("�̸� �� ������ : %s\n", resp);
return 0;
}*/

/*
int main() {
char str1[80] = "pear";
char str2[80] = "peach";

printf("������ ���߿� ������ ���� : ");
if (strcmp(str1, str2) > 0)
{
printf("%s\n", str2);
}
else printf("%s\n", str2);
return 0;
}*/

/*
void assign(void);
int main()
{
auto int a = 0;

assign();
printf("main�Լ� a : %d\n", a);
return 0;
}
void assign(void)
{
int a;
a = 10;
printf("assign �Լ� a : %d\n", a);
}*/

/*
int main()
{
int a = 10, b = 20;

printf("��ȯ �� a�� b�� �� : %d,%d\n", a,b);
{
int temp;
temp = a;
a = b;
b = temp;
}
printf("��ȯ �� a,b�� �� : %d,%d\n", a, b);
return 0;
}*/

/*
void assign10(void);
void assign20(void);
int a;
int main() {
printf("�Լ� ȣ�� ��a �� : %d\n", a);

assign10();
assign20();

printf("�Լ� ȣ�� ��a�� : %d\n", a);
return 0;
}
void assign10(void)
{
a = 10; //�������� �������� ������ ��ġ�� �������� ���� ���
}
void assign20(void)
{
int a;
a = 20;
}*/

/*
void auto_func(void);
void static_func(void);
int main()
{
int i;
printf("�Ϲ� ���� ����(auto)����� �Լ�...\n");
for (i = 0; i < 3; i++)
{
auto_func();
}
printf("���� ���� ����(static)����� �Լ�...\n");
for (i = 0; i < 3; i++)
{
static_func();
}
return 0;
}
void auto_func(void)
{
auto int a = 0;
a++;
printf("%d\n", a);
}
void static_func(void)
{
static int a; //���� ���� ������ ����~������� ������� ����
a++;
printf("%d\n", a);
}*/

/*
int main()
{ //�������� ���� �����Ϸ��� �������Ϳ� �������� ���� ����
register int i; //�ּ� ������
auto int sum = 0;

for (i = 1; i <= 10000; i++)
{
sum += i;
}
printf("%d\n", sum);
return 0;
}*/

/*
void add_ten(int a);
int main() {
int a = 10;
add_ten(a);
printf("a : %d\n", a);
return 0;
}
void add_ten(int a)
{
a = a + 10;
}*/

/*
void add_ten(int *pa);
int main() {
int a = 10;

add_ten(&a);
printf("a : %d\n", a);
return 0;
}
void add_ten(int *pa)
{
*pa = *pa + 10;
}*/

/*
int *sum(int a, int b);
int main() {
int *resp;
resp = sum(10, 20);
printf("�� ���� �� : %d\n", *resp);
return 0;
}
int *sum(int a, int b)
{
static int res;
res = a + b;
return &res;
}*/

/*
int main() {
int score[3][4];
int total;
double avg;
int i, j;

for (i = 0; i < 3; i++)
{
printf("4������ ���� �Է� : ");
for (j = 0; j < 4; j++)
{
scanf_s("%d", &score[i][j]);
}
}
for (i = 0; i < 3; i++)
{
total = 0;
for (j = 0; j < 4; j++)
{
total += score[i][j];
}
avg = total / 4.0;
printf("���� : %d, ��� : %.2lf\n", total, avg);
}
return 0;
}*/

/*
int main()
{
int num[3][4] = {
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
};
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0;j < 4; j++)
{
printf("%5d", num[i][j]);
}
printf("\n");
}
return 0;
}*/

/*
int main()
{
char animal[5][20];
int i;
int count;

count = sizeof(animal) / sizeof(animal[0]);
for (i = 0; i < count; i++)
{
scanf_s("%s", animal[0]);
}
for (i = 0; i < count; i++)
{
printf("%s",animal[i]);
}
return 0;
}*/

/*
int main()
{
char animal1[5][10] = {
{'d','o','g','\0'},
{'t','i','g','e','r','\0'},
{'r','a','b','b','i','t','\0'},
{'h','o','r','s','e','\0'},
{'c','a','t','\0'}
};
char animal2[][10] = { "dog","tiger","rabbit","horse","cat" };
int i;

for(i = 0; i < 5; i++)
{
printf("%s ", animal1[i]);
}
printf("\n");
for (i = 0; i < 5; i++)
{
printf("%s ", animal2[i]);
}
return 0;
}*/

/*
int main()
{
int score[2][3][4] = {
{{1,2,3,4},{1,2,3,4},{1,2,3,4}},
{{1,2,3,4},{2,3,4,5},{5,6,7,8}}
};
int i, j, k;
for (i = 0; i < 2; i++)
{
printf("%d�� ����...\n", i + 1);
for (j = 0; j < 3; j++)
{
for (k = 0; k < 4; k++) {
printf("%5d", score[i][j][k]);
}
printf("\n");
}
printf("\n");
}
return 0;
}*/

/*
int main() {
char *pary[5];
int i;

pary[0] = "dog";
pary[1] = "elephant";
pary[2] = "horse";
pary[3] = "tiger";
pary[4] = "lion";
for (i = 0; i < 5; i++)
{
printf("%s\n", pary[i]);
}
return 0;
}*/

/*
int main()
{
int arr1[4] = {1,2,3,4};
int arr2[4] = {1,2,3,4};
int arr3[4] = {5,6,7,8};
int *pary[3] = { arr1,arr2,arr3 };
int i, j;

for (i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
printf("%5d", pary[i][j]);
}
printf("\n");
}
return 0;
}*/

/*
int main() {
int a = 10;
int *pi;
int **ppi;

pi = &a;
ppi = &pi;

printf("--------------------------------------------\n");
printf("����	������		&����	*����	**����\n");
printf("--------------------------------------------\n");
printf(" a%10d%10u\n", a, &a);
printf("pi%10u&10u%10d\n", pi, &pi, *pi);
printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
printf("--------------------------------------------\n");

return 0;
}*/

/*
void swap_ptr(char **ppa, char **ppb);
int main()
{
char *pa = "success";
char *pb = "failure";

printf("pa -> %s, pb -> %s\n", pa, pb);
swap_ptr(&pa, &pb);
printf("pa -> %s, pb -> %s\n", pa, pb);

return 0;
}
void swap_ptr(char **ppa, char **ppb)
{
char *pt;

pt = *ppa;
*ppa = *ppb;
*ppb = pt;
}*/

/*
void  print_str(char **pps, int cnt);
int main()
{
char *ptr_arr[] = { "eagle","tiger","lion","squirrel" };
int count;

count = sizeof(ptr_arr) / sizeof(ptr_arr[0]);
print_str(ptr_arr, count);

return 0;
}
void print_str(char **pps, int cnt)
{
int i;
for (i = 0; i < cnt; i++)
{
printf("%s\n", pps[i]);
}
}*/

/*
int main()
{
int arr[5];
printf(" arr�� �� : %u\t", arr);
printf("arr�� �ּ� : %u\n", &arr);
printf(" arr+1 : %u\t", arr + 1); //���� 4����
printf(" &arr+1 : %u\n", &arr + 1); //�ּ� 20���� arr[5] 4*5=20

return 0;
}*/

/*
int main()
{
int arr[3][4] = { {1,2,3,4},{5,6,7,8},{1,2,3,4} };
int(*pa)[4];
int i, j;

pa = arr;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
printf("%5d", pa[i][j]);
}
printf("\n");
}
return 0;
}*/

/*
void print_arr(int(*)[4]);
int main()
{
int arr[3][4] = { {1,2,3,4},{1,2,3,4},{5,6,7,8} };
print_arr(arr);
return 0;
}
void print_arr(int(*pa)[4])
{
int i, j;
for (i = 0; i < 3; i++)
{
for (j = 0; j < 4; j++)
{
printf("%5d", pa[i][j]);
}
printf("\n");
}
}*/

/*
int sum(int, int);
int main()
{
int(*fp)(int, int);
int res;

fp = sum;
res = fp(10, 20);
printf("result : %d\n", res);
return 0;
}
int sum(int a, int b)
{
return(a + b);
}*/

/*
void func(int(*fp)(int, int));
int sum(int a, int b);
int mul(int a, int b);
int max(int a, int b);
int main()
{
int sel;
printf("01 �� ���� ��\n");
printf("02 �� ���� ��\n");
printf("03�� ���� �� ū �� ���\n");
printf("���ϴ� ���� ���� : ");
scanf_s("%d", &sel);

switch (sel)
{
case1: func(sum); break;
case2: func(mul); break;
case3: func(max); break;
}
return 0;
}
void func(int(*fp)(int, int))
{
int a, b;
int res;

printf("�� ���� �� �Է� : ");
scanf_s("%d%d", &a, &b);
res = fp(a, b);
printf("������� : %d\n", res);
}
int sum(int a, int b)
{
return(a + b);
}
int mul(int a, int b)
{
return (a*b);
}
int max(int a, int b)
{
if (a > b) return a;
else return b;
}*/

/*
int main()
{
int a = 10;
double b = 3.5;
void *vp;

vp = &a;
printf("a : %d\n", *(int *)vp);

vp = &b;
printf("b: %.1lf\n", *(double *)vp);

return 0;
}*/

/*
int main()
{
int *pi;
double *pd;

pi = (int *)malloc(sizeof(int));
if (pi == NULL)
{
printf("# �޸� ����\n");
exit(1);
}
pd = (double *)malloc(sizeof(double));
*pi = 10;
*pd = 3.4;

printf("������ ��� : %d\n", *pi);
printf("�Ǽ��� ��� : %.1lf\n", *pd);

free(pi);
free(pd);

return 0;
}*/

/*
int main()
{
int *pi;
int i, sum = 0;

pi = (int *)malloc(5 * sizeof(int));
if (pi == NULL)
{
printf("�޸� ����\n");
exit(1);
}
printf("�ټ��� ���� �Է� : ");
for (i = 0;i < 5; i++)
{
scanf_s("%d", &pi[i]);
sum += pi[i];
}
printf("�ټ��� ��� ���� : %.1lf\n", (sum / 5.0));
free(pi);
return 0;
}*/

/*
int main()
{
int *pi;
int size = 5;
int count = 0;
int num;
int i;

pi = (int *)calloc(size, sizeof(int));
while (1) {
printf("����� �Է� => ");
scanf_s("%d", &num);
if (num <= 0) break;
if (count == size)
{
size += 5;
pi = (int *)realloc(pi, size * sizeof(int));
}
pi[count++] = num;
}
for (i = 0; i < count; i++)
{
printf("%5d", pi[i]);
}
free(pi);
return 0;
}*/
/*
int main()
{
char temp[80];
char *str[3];
int i;

for (i = 0; i < 3; i++)
{
printf("���ڿ� �Է� : ");
gets(temp);
str[i] = (char *)malloc(strlen(temp) + 1);
strcpy(str[i], temp);
}
for (i = 0; i < 3; i++)
{
printf("%s\n", str[i]);
}
for (i = 0; i < 3; i++)
{
free(str[i]);
}
return 0;
}*/

/*
void print_str(char **ps);
int main()
{
char temp[80];
char *str[21] = { 0 };
int i = 0;

while (i < 20)
{
printf("���ڿ� �Է� : ");
gets(temp);
if (strcmp(temp, "end") == 0)break;
str[i] = (char *)malloc(strlen(temp) + 1);
strcpy(str[i], temp);
i++;
}
print_str(str);
for (i = 0; str[i] != NULL; i++)
{
free(str[i]);
}
return 0;
}
void print_str(char **ps)
{
while (*ps != NULL)
{
printf("%s\n", *ps);
ps++;
}
}*/

/*
int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return 0;
}*/

/*
struct student
{
int num;
double grade;
};
int main()
{
struct student s1;

s1.num = 2;
s1.grade = 2.7;

printf("�й� : %d\n", s1.num);
printf("���� : %.1lf\n", s1.grade);

return 0;
}*/

/*
struct profile
{
char name[20];
int age;
double height;
char *intro;
};
int main()
{
struct profile yuni;
strcpy(yuni.name, "������");
yuni.age = 17;
yuni.height = 164.5;

yuni.intro = (char *)malloc(80);
printf("�ڱ�Ұ� : ");
gets(yuni.intro);

printf("�̸� : %s\n", yuni.name);
printf("���� : %d\n", yuni.age);
printf("Ű : %.1lf\n", yuni.height);
printf("�ڱ�Ұ� : %s\n", yuni.intro);
free(yuni.intro);

return 0;
}*/

/*
struct profile
{
int age;
double height;
};
struct student
{
struct profile pf;
int id;
double grade;
};
int main()
{
struct student yuni;

yuni.pf.age = 17;
yuni.pf.height = 164.5;
yuni.id = 315;
yuni.grade = 4.3;

printf("���� : %d\n", yuni.pf.age);
printf("Ű : %.lf\n", yuni.pf.height);
printf("�й� : %d\n", yuni.id);
printf("���� : %.1f\n", yuni.grade);

return 0;
}*/

/*
struct student
{
int id;
char name[20];
double grade;
};
int main()
{
struct student s1 = { 315,"ȫ�浿",2.4 },
s2 = { 316,"�̼���",3.7 },
s3 = { 317,"�������",4.4 };

struct student max;
max = s1;
if (s2.grade > max.grade)max = s2;
if (s3.grade > max.grade)max = s3;

printf("�й� : %d\n", max.id);
printf("�̸� : %s\n", max.name);
printf("���� : %.1lf\n", max.grade);

return 0;
}*/

/*
struct vision {
double left;
double right;
};
struct vision exchange(struct vision robot);
int main()
{
struct vision robot;

printf("�÷� �Է� : ");
scanf_s("%lf%lf", &(robot.left), &(robot.right));
robot = exchange(robot);
printf("�ٲ� �÷� : %.1lf %.1lf\n", robot.left, robot.right);

return 0;
}
struct vision exchange(struct vision robot)
{
double temp;

temp = robot.left;
robot.left = robot.right;
robot.right = temp;

return robot;
}*/

/*
struct score
{
int kor;
int eng;
int math;
};
int main()
{
struct score yuni = { 90,80,70 };
struct score *ps = &yuni;

printf("���� : %d\n", (*ps).kor);
printf("���� : %d\n", ps->eng);
printf("���� : %d\n", ps->math);

return 0;
}*/

/*
struct address
{
char name[20];
int age;
char tel[20];
char addr[80];
};
int main()
{
struct address list[5] = {
{"ȫ�浿",23,"111-1111","�︪�� ����"},
{"�̼���", 35, "222-2222", "���� ��õ��"},
{"�庸��",19,"333-3333","�ϵ� û����"},
{"������", 15, "444-4444", "�泲 õ��"},
{"���߱�",45,"555-5555","Ȳ�ص� ����"}
};
int i;
for (i = 0; i < 5; i++)
{
printf("%10s%5d%15s%20s\n",
list[i].name, list[i].age, list[i].tel, list[i].addr);
}
return 0;
}*/

/*
struct address
{
char name[20];
int age;
char tel[20];
char addr[80];
};
void print_list(struct address *lp);
int main()
{
struct address list[5] = {
{ "ȫ�浿",23,"111-1111","�︪�� ����" },
{ "�̼���", 35, "222-2222", "���� ��õ��" },
{ "�庸��",19,"333-3333","�ϵ� û����" },
{ "������", 15, "444-4444", "�泲 õ��" },
{ "���߱�",45,"555-5555","Ȳ�ص� ����" }
};
print_list(list);
return 0;
}
void print_list(struct address *lp)
{
int i;
for (i = 0; i < 5; i++)
{
printf("%10s%5d%15s%20s\n",
(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
}
}*/

/*
struct list {
int num;
struct list *next;
};
int main()
{
struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
struct list *head = &a, *current;

a.next = &b;
b.next = &c;

printf("head -> num : %d\n", head->num);
printf("head -> head : %d\n", head->next->num);
printf("list all : ");
current = head;
while (current != NULL)
{
printf("%d ", current->num);
current = current->next;
}
printf("\n");

return 0;
}*/

/*
union student
{
int num;
double grade;
};
int main()
{
union student s1 = { 315 };
printf("�й� : %d\n", s1.num);
s1.grade = 4.4;
printf("���� : %.1lf\n", s1.grade);
printf("�й� : %d\n", s1.num);

return 0;
}*/

/*
enum season {SPRING,SUMMER,FALL,WINTER};
int main() {
enum season ss;
char *pc = NULL;
ss = SPRING;
switch (ss)
{
case SPRING:
pc = "inline"; break;
case SUMMER:
pc = "swimming"; break;
case FALL:
pc = "trip"; break;
case WINTER:
pc = "skiing"; break;
}
printf("���� ����Ȱ�� : %s\n", pc);
return 0;
}*/

/*
struct student
{
int num;
double grade;
};
typedef struct student Student;
void print_data(Student *ps);
int main()
{
Student s1 = { 315,4.2 };
print_data(&s1);
return 0;
}
void print_data(Student *ps)
{
printf("�й� : %d\n", ps->num);
printf("���� : %.1lf\n", ps->grade);
}*/

/*
int main()
{
FILE *fp;

fp = fopen("a.txt", "r");
if (fp == NULL)
{
printf("������ ������ ����\n");
return 1;
}
printf("������ ����\n");
fclose(fp);
return 0;
}*/

/*
int main()
{
FILE *fp;
int ch;

fp = fopen("a.txt", "r");
if (fp == NULL)
{
printf("file no\n");
return 1;
}
while (1)
{
ch = fgetc(fp);
if (ch == EOF)
{
break;
}
putchar(ch);
}
fclose(fp);
return 0;
}*/

/*
int main()
{
FILE *fp;
char str[] = "banana";
int i;

fp = fopen("b.txt", "w");
if (fp == NULL)
{
printf("���� ��\n");
return 1;
}
i = 0;
while (str[i] != '\0')
{
fputc(str[i], fp);
i++;
}
fputc('\n', fp);
fclose(fp);

return 0;
}*/

/*
int main()
{
int ch;

while (1);
{
ch = getchar();
if (ch == EOF)
{
break;
}
putchar(ch);
}
return 0;
}*/

/*
int main()
{
int ch;
while (1)
{
ch = fgetc(stdin);
if (ch == EOF)
{
break;
}
fputc(ch, stdout);
}
return 0;
}*/

/*
int main()
{
FILE *fp;
int arr[10] = { 1,2,3,4,5,6,7,8,9,1 };
int i, res;

fp = fopen("a.txt", "wb");
for (i = 0; i < 10; i++)
{
fputc(arr[i], fp);
}
fclose(fp);
fp = fopen("a.txt", "rt");
while (1)
{
res = fgetc(fp);
if (res == EOF)break;
printf("%4d", res);
}
fclose(fp);

return 0;
}*/

/*
int main() {
FILE *fp;
char str[20];
fp = fopen("a.txt", "a+");
if (fp == NULL)
{
printf("���� ��\n");
return 1;
}
while (1)
{
printf("���� �̸� : ");
scanf_s("%s", str);
if (strcmp(str, "end") == 0)
{
break;
}
else if (strcmp(str, "list") == 0)
{
fseek(fp, 0, SEEK_SET);
while (1)
{
fgets(str, sizeof(str), fp);
if (feof(fp))
{
break;
}
printf("%s", str);
}
}
else
{
fprintf(fp, "%s\n", str);
}
}
fclose(fp);
return 0;
}*/
/*
int main()
{
FILE *ifp, *ofp;
char str[80];
char *res;

ifp = fopen("a.txt", "r");
if (ifp == NULL)
{
printf("�Է� ���� ��������\n");
return 1;
}
ofp = fopen("b.txt", "w");
if (ofp == NULL)
{
printf("��� ���� ��������\n");
return 1;
}
while (1);
{
res = fgets(str, sizeof(str), ifp);
if (res == NULL)
{
break;
}
str[strlen(str) - 1] = '\0';
fputs(str, ofp);
fputs(" ", ofp);
}
fclose(ifp);
fclose(ofp);

return 0;
}*/
/*
int main()
{
FILE *ifp, *ofp;
char name[20];
int kor, eng, math;
int total;
double avg;
int res;

ifp = fopen("a.txt", "r");
if (ifp == NULL)
{
printf("�Է� ���� ��������\n");
return 1;
}
ofp = fopen("b.txt", "w");
if (ofp == NULL)
{
printf("��� ���� ��������\n");
return 1;
}
while (1);
{
res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &math);
if (res == EOF)
{
break;
}
total = kor + eng + math;
avg = total / 3.0;
fprintf(ofp, "%s%5d%7.1lf\n", name, total, avg);
}
fclose(ifp);
fclose(ofp);

return 0;
}*/
/*
int main()
{
FILE *afp, *bfp;
int num = 10;
int *res;

afp = fopen("a.txt", "wt");
fprintf(afp, "%d", num);

bfp = fopen("b.txt", "wb");
fwrite(&num, sizeof(num), 1, bfp);

fclose(afp);
fclose(bfp);

bfp = fopen("b.txt", "rb");
fread(&res, sizeof(res), 1, bfp);
printf("%d", res);

fclose(bfp);

return 0;
}*/