#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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