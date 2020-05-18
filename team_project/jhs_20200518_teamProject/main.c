#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct team_info
{
	int team_id;
	char team_name[80];
	char corp_name[80];
}team_info;

void select_menu(team_info* list, int list_len);
void sortByTeamId(team_info* list, int list_len);
void sortByTeamName(team_info* list, int list_len);
void sortByCorpName(team_info* list, int list_len);
void print_list(team_info* list, int list_len);

int main(void)
{
	team_info list[6] = {
		{1, "horangnavi", "navilab"},
		{2, "machinegun", "fiveworks"},
		{3, "megaton", "megazone"},
		{4, "dd", "vitec"},
		{5, "banana", "monkeysoft"},
		{6, "park123", "nudbana"},
	};

	int list_len = sizeof(list) / sizeof(list[0]);
	
	while (1) {
		select_menu(list, list_len);
	}
	
	return 0;
}

void select_menu(team_info* list, int list_len)
{
	int menu_num;
	printf("==== �޴��� ������ �ּ���.====\n");
	printf("====   (���� : 1 Enter )  ====\n");
	printf("==== 1. �����̵� �� ���� =====\n");
	printf("==== 2. �� �̸�  �� ���� =====\n");
	printf("==== 3. ȸ���̸� �� ���� =====\n");
	printf("==== 4. ��            �� =====\n");
	printf("==============================\n");

	scanf_s("%d", &menu_num);
	printf("\n");

	
	switch
		(menu_num)
	{
	case 1:
		printf("�� ���̵� �� �����Դϴ�.\n");
		sortByTeamId(list, list_len);
		break;
	case 2:
		printf("�� �̸� �� �����Դϴ�.\n");
		sortByTeamName(list, list_len);
		break;
	case 3:
		printf("ȸ���̸� �� �����Դϴ�.\n");
		sortByCorpName(list, list_len);
		break;
	case 4:
		printf("���α׷��� �����մϴ�.\n");
		exit(0);
		break;
	default:
		break;
	}


	return;
}

void sortByTeamId(team_info* list, int list_len)
{
	int i, j;
	team_info tmp;
	for (i = 0; i < list_len; i++)
	{
		for (j = 0; j < list_len - i - 1; j++)
		{
			if (list[j].team_id  > list[j + 1].team_id)
			{
				tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
	}
	print_list(list, list_len);
}

void sortByTeamName(team_info* list, int list_len)
{
	int i, j;
	team_info tmp;
	for (i = 0; i < list_len; i++)
	{
		for (j = 0; j < list_len - i -1; j++)
		{
			if (strcmp(list[j].team_name, list[j + 1].team_name) > 0)
			{
				tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
	}
	print_list(list, list_len);
}

void sortByCorpName(team_info* list, int list_len)
{
	int i, j;
	team_info tmp;
	for (i = 0; i < list_len; i++)
	{
		for (j = 0; j < list_len - i - 1; j++)
		{
			if (strcmp(list[j].corp_name, list[j + 1].corp_name) > 0)
			{
				tmp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = tmp;
			}
		}
	}
	print_list(list, list_len);
}

void print_list(team_info* list, int list_len)
{
	int i;
	for (i = 0; i < list_len; i++)
	{
		printf("%-5d  %-20s\t  %-20s\n", (list+i)->team_id, (list + i)->team_name, (list + i)->corp_name);
	}
	printf("\n");
}
