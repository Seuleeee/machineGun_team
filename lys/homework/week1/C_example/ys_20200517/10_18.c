#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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

/*
int main() {
char small, cap = 'G';

if ((cap >= 'A') && (cap <= 'Z'))
{       //대문자G     32
small = cap + ('a' - 'A'); // 소문자a-대문자A는 32차이
}//small에는 대문자G에 32더해서 소문자g가 나옴
printf("대문자 : %c %c", cap, '\n');
printf("소문자 : %c", small);

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
printf("입력 문자 : ");
putchar(ch);
putchar('\n');

return 0;
}*/

/*
int main() {

char ch;
int i;

for (i = 0; i < 3; i++) //입출력 세개밖에안됨
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
printf("입력 문자열 : %s\n", str);

return 0;
}
void my_gets(char *str, int size)
{
int ch;
int i = 0;

ch = getchar();
while ((ch != '\n') && (i < size - 1)) //size=7 size-1=6
{//i=0 ~ 6까지
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

printf("학번 입력 : ");
scanf_s("%d", &num);
getchar();
printf("학점 입력 : ");
grade = getchar();
printf("학번 : %d, 학점 : %c", num, grade);

return 0;
}*/

/*
int main()
{
printf("apple이 저장된 시작 주소 값 : %p\n", "apple");
printf("두번쨰 문자 주소 값 : %p\n", "apple" + 1);
printf("첫 번째 문자 : %c\n", *"apple");
printf("두 번째 문자 : %c\n", *("apple" + 1));
printf("배열로 표현한 세번째 문자 : %c\n", "apple"[2]);
printf("네번째 문자 : %c\n", *("apple" + 3));
printf("다섯번째 문자 : %c\n", "apple"[4]);

return 0;
}*/

/*
int main()
{
char *dess = "apple";

printf("오늘 후식은 %s다!\n", dess);
dess = "cake";
printf("내일 후식은 %s다!\n", dess);

return 0;
}*/

/*
int main() {
char str[80];

printf("문자열 입력 : ");
scanf_s("%s", str);
printf("첫 번째 단어 : %s\n", str);
scanf_s("%s", str);
printf("버퍼에 남은 두번째 단어 : %s\n", str);

return 0;
}*/

/*
int main() {
char str[80];

printf("공백 포함된 문자열 입력 : ");
gets(str);
printf("입력한 문자열은 %s 이다", str);

return 0;
}*/

/*
int main()
{
char str[80];
printf("공백 포함 문자열 입력 : ");
fgets(str, sizeof(str), stdin);

printf("입력된 문자열은 %s이다.\n", str);

return 0;
}*/

/*
int main()
{
int age;
char name[20];

printf("나이 입력 : ");
scanf_s("%d", &age);

printf("이름 입력 : ");
gets(name);
printf("나이 : %d, 이름 : %s\n", age, name);

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

printf("최초 문자열 : %s\n", str1);
strcpy(str1, str2);
printf("바뀐 문자열 : %s\n", str1);
strcpy(str1, ps1);
printf("바뀐 문자열 : %s\n", str1);

strcpy(str1, ps2);
printf("바뀐 문자열 : %s\n", str1);

strcpy(str1, "banana");
printf("바뀐 문자열 : %s\n", str1);

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

printf("2개 과일 입력 : ");
scanf_s("%s%s", str1, str2);
if (strlen(str1) > strlen(str2))
{
resp = str1;
}
else
resp = str2;
printf("이름 긴 과일은 : %s\n", resp);
return 0;
}*/

/*
int main() {
char str1[80] = "pear";
char str2[80] = "peach";

printf("사전에 나중에 나오는 과일 : ");
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
printf("main함수 a : %d\n", a);
return 0;
}
void assign(void)
{
int a;
a = 10;
printf("assign 함수 a : %d\n", a);
}*/

/*
int main()
{
int a = 10, b = 20;

printf("교환 전 a와 b의 값 : %d,%d\n", a,b);
{
int temp;
temp = a;
a = b;
b = temp;
}
printf("교환 후 a,b의 값 : %d,%d\n", a, b);
return 0;
}*/

/*
void assign10(void);
void assign20(void);
int a;
int main() {
printf("함수 호출 전a 값 : %d\n", a);

assign10();
assign20();

printf("함수 호출 후a값 : %d\n", a);
return 0;
}
void assign10(void)
{
a = 10; //전역변수 지역변수 사용범위 겹치면 지역변수 먼저 사용
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
printf("일반 지역 변수(auto)사용한 함수...\n");
for (i = 0; i < 3; i++)
{
auto_func();
}
printf("정적 지역 변수(static)사용한 함수...\n");
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
static int a; //정적 지역 변수로 실행~종료까지 저장공간 유지
a++;
printf("%d\n", a);
}*/

/*
int main()
{ //레지스터 변수 컴파일러가 레지스터에 생성할지 말지 결정
register int i; //주소 못구함
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
printf("두 정수 합 : %d\n", *resp);
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
printf("4과목의 점수 입력 : ");
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
printf("총점 : %d, 평균 : %.2lf\n", total, avg);
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
printf("%d반 점수...\n", i + 1);
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
printf("변수	변숫값		&연산	*연산	**연산\n");
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
printf(" arr의 값 : %u\t", arr);
printf("arr의 주소 : %u\n", &arr);
printf(" arr+1 : %u\t", arr + 1); //값은 4차이
printf(" &arr+1 : %u\n", &arr + 1); //주소 20차이 arr[5] 4*5=20

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
printf("01 두 정수 합\n");
printf("02 두 정수 곱\n");
printf("03두 정수 중 큰 값 계산\n");
printf("원하는 연산 선택 : ");
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

printf("두 정수 값 입력 : ");
scanf_s("%d%d", &a, &b);
res = fp(a, b);
printf("결과값은 : %d\n", res);
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
printf("# 메모리 부족\n");
exit(1);
}
pd = (double *)malloc(sizeof(double));
*pi = 10;
*pd = 3.4;

printf("정수형 사용 : %d\n", *pi);
printf("실수형 사용 : %.1lf\n", *pd);

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
printf("메모리 부족\n");
exit(1);
}
printf("다섯명 나이 입력 : ");
for (i = 0;i < 5; i++)
{
scanf_s("%d", &pi[i]);
sum += pi[i];
}
printf("다섯명 평균 나이 : %.1lf\n", (sum / 5.0));
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
printf("양수만 입력 => ");
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
printf("문자열 입력 : ");
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
printf("문자열 입력 : ");
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

printf("학번 : %d\n", s1.num);
printf("학점 : %.1lf\n", s1.grade);

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
strcpy(yuni.name, "서하윤");
yuni.age = 17;
yuni.height = 164.5;

yuni.intro = (char *)malloc(80);
printf("자기소개 : ");
gets(yuni.intro);

printf("이름 : %s\n", yuni.name);
printf("나이 : %d\n", yuni.age);
printf("키 : %.1lf\n", yuni.height);
printf("자기소개 : %s\n", yuni.intro);
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

printf("나이 : %d\n", yuni.pf.age);
printf("키 : %.lf\n", yuni.pf.height);
printf("학번 : %d\n", yuni.id);
printf("학점 : %.1f\n", yuni.grade);

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
struct student s1 = { 315,"홍길동",2.4 },
s2 = { 316,"이순신",3.7 },
s3 = { 317,"세종대왕",4.4 };

struct student max;
max = s1;
if (s2.grade > max.grade)max = s2;
if (s3.grade > max.grade)max = s3;

printf("학번 : %d\n", max.id);
printf("이름 : %s\n", max.name);
printf("학점 : %.1lf\n", max.grade);

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

printf("시력 입력 : ");
scanf_s("%lf%lf", &(robot.left), &(robot.right));
robot = exchange(robot);
printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

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

printf("국어 : %d\n", (*ps).kor);
printf("영어 : %d\n", ps->eng);
printf("수학 : %d\n", ps->math);

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
{"홍길동",23,"111-1111","울릉도 독도"},
{"이순신", 35, "222-2222", "서울 건천동"},
{"장보고",19,"333-3333","완도 청해진"},
{"유관순", 15, "444-4444", "충남 천안"},
{"안중근",45,"555-5555","황해도 해주"}
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
{ "홍길동",23,"111-1111","울릉도 독도" },
{ "이순신", 35, "222-2222", "서울 건천동" },
{ "장보고",19,"333-3333","완도 청해진" },
{ "유관순", 15, "444-4444", "충남 천안" },
{ "안중근",45,"555-5555","황해도 해주" }
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
printf("학번 : %d\n", s1.num);
s1.grade = 4.4;
printf("학점 : %.1lf\n", s1.grade);
printf("학번 : %d\n", s1.num);

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
printf("나의 레저활동 : %s\n", pc);
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
printf("학번 : %d\n", ps->num);
printf("학점 : %.1lf\n", ps->grade);
}*/

/*
int main()
{
FILE *fp;

fp = fopen("a.txt", "r");
if (fp == NULL)
{
printf("파일이 열리지 않음\n");
return 1;
}
printf("파일이 열림\n");
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
printf("파일 노\n");
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
printf("파일 노\n");
return 1;
}
while (1)
{
printf("과일 이름 : ");
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
printf("입력 파일 못열었다\n");
return 1;
}
ofp = fopen("b.txt", "w");
if (ofp == NULL)
{
printf("출력 파일 못열었음\n");
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
printf("입력 파일 못열었다\n");
return 1;
}
ofp = fopen("b.txt", "w");
if (ofp == NULL)
{
printf("출력 파일 못열었음\n");
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