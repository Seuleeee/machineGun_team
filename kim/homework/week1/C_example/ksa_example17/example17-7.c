#include <stdio.h>

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int example7(void)
{
	struct address list[5] = {
		{"hong", 23, "111-1111", "DokDo"},
		{"lee", 123, "222-2222", "jinhae"},
		{"jang", 12, "333-3333", "seoul"},
		{"lyu", 123, "444-4444", "chenan"},
		{"ahn", 102, "555-5555", "haeju"}
	};

	int i;
	for (i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n",
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}