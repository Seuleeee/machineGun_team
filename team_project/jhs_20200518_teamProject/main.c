#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "struct.h"

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