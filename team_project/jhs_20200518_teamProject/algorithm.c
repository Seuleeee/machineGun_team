#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "struct.h"
#include <memory.h>
#include <time.h>

int file_open()
{
    FILE* ifp;
    int ch;
    char str[500][1024];
    int count = 0;
    int info_count = 0;
    char* word;
    team_info info[24];

    ifp = fopen("D:\\result\\����� ������ ���_�ѱ�ǥ����ȸ.csv", "r");

    if (ifp == NULL)
    {
        printf("������ ������ �ʾҽ��ϴ�.\n");
        return 1;
    }

    while (1)
    {

        word = fgets(str[count], 1024, ifp);

        if (word == NULL)
        {
            break;
        }

        count++;

    }

    arr_delete(str, '?');
    change_str(str, ',');
    arr_token(str, ',');
    arr_delete(str, '\"');
    info_save(str, info);
    search(info);
    fclose(ifp);

};

void change_str(char str[][1024], char find_str)
{
    int i, j;

    for (i = 1; i < 425; i++)
    {
        for (j = 0; j < 1023; j++)
        {
            if (str[i][j] == find_str)
            {
                if (str[i][j + 1] == find_str)
                {
                    str[i][j] = '\0';
                }
            }
        }
    }


}

void arr_delete(char str[][1024], char find_str)
{
    int i, j;

    for (i = 1; i < 425; i++)
    {
        for (j = 0; j < 1024; j++)
        {
            if (str[i][j] == find_str)
            {
                memmove(str[i] + j, str[i] + j + 1, strlen(str[i]) - j);
            }
        }
    }
}

void arr_token(char str[][1024], char find_str)
{
    int i, j;
    int count = 0;

    for (i = 1; i < 425; i++)
    {
        for (j = 0; j < 1024; j++)
        {
            if (str[i][0] == ',')
            {
                str[i][0] = '\n';
            }
            else
            {
                if (str[i][j] == '\"')
                {
                    count++;
                    if (count == 2)
                    {
                        count = 0;

                    }
                }
                else if (count == 0 && str[i][j] == find_str)
                {
                    str[i][j] = '\n';
                }
            }

        }
    }
}

void info_save(char str[][1024], team_info info[24])
{
    int i;
    int info_count = 0;

    for (i = 1; i < 425; i++)
    {
        if (str[i][0] != '\0')
        {

            int sc = 0;

            char* ptr = strtok(str[i], "\n");
            while (ptr != NULL)
            {
                switch (sc)
                {
                case 0:
                    if (str[i][0] == '\n')
                    {
                        strcpy(info[info_count].leader_yn, "����");
                        sc++;
                    }
                    else
                    {
                        strcpy(info[info_count].leader_yn, "����");
                        sc++;
                        break;
                    }
                case 1:
                    strcpy(info[info_count].corp_name, ptr);
                    sc++;
                    break;
                case 2:
                    strcpy(info[info_count].name, ptr);
                    sc++;
                    break;
                case 3:
                    strcpy(info[info_count].email, ptr);
                    sc++;
                    break;
                case 4:
                    strcpy(info[info_count].univ, ptr);
                    sc++;
                    break;
                case 5:
                    strcpy(info[info_count].major, ptr);
                    sc++;
                    break;
                }
                ptr = strtok(NULL, "\n");

            }
            info_count++;
        }
    }
}

void search(team_info info[24])
{
    char str[80];
    time_t ltime;
    char timebuf[26];
    time(&ltime);
    ctime_s(timebuf, 26, &ltime);

    FILE* ofp;
    printf("�˻��� �ܾ �Է��ϼ���. : ");
    scanf("%s", str);

    ofp = fopen("D:\\result\\result.txt", "a");

    if (ofp == NULL)
    {
        printf("������ ���� ���߽��ϴ�.");
    }

    int i;
    for (i = 0; i < 24; i++)
    {
        if (strcmp(info[i].corp_name, str) == 0)
        {
            printf("%s, ", info[i].leader_yn);
            fprintf(ofp, "%s, ", info[i].leader_yn);
            printf("%s, ", info[i].corp_name);
            fprintf(ofp, "%s, ", info[i].corp_name);
            printf("%s, ", info[i].name);
            fprintf(ofp, "%s, ", info[i].name);
            printf("%s, ", info[i].email);
            fprintf(ofp, "%s, ", info[i].email);
            printf("%s, ", info[i].univ);
            fprintf(ofp, "%s, ", info[i].univ);
            printf("%s\n", info[i].major);
            fprintf(ofp, "%s\n", info[i].major);
            

        }

        else if (strcmp(info[i].name, str) == 0)
        {
            printf("%s, ", info[i].leader_yn);
            fprintf(ofp, "%s, ", info[i].leader_yn);
            printf("%s, ", info[i].corp_name);
            fprintf(ofp, "%s, ", info[i].corp_name);
            printf("%s, ", info[i].name);
            fprintf(ofp, "%s, ", info[i].name);
            printf("%s, ", info[i].email);
            fprintf(ofp, "%s, ", info[i].email);
            printf("%s, ", info[i].univ);
            fprintf(ofp, "%s, ", info[i].univ);
            printf("%s\n", info[i].major);
            fprintf(ofp, "%s\n", info[i].major);

            if (strcmp(info[i].leader_yn, "����") == 0)
            {
                int j;
                for (j = i + 1; j < i + 4; j++)
                {
                    printf("%s, ", info[i].leader_yn);
                    fprintf(ofp, "%s, ", info[i].leader_yn);
                    printf("%s, ", info[i].corp_name);
                    fprintf(ofp, "%s, ", info[i].corp_name);
                    printf("%s, ", info[i].name);
                    fprintf(ofp, "%s, ", info[i].name);
                    printf("%s, ", info[i].email);
                    fprintf(ofp, "%s, ", info[i].email);
                    printf("%s, ", info[i].univ);
                    fprintf(ofp, "%s, ", info[i].univ);
                    printf("%s\n", info[i].major);
                    fprintf(ofp, "%s\n", info[i].major);
                }
            }

        }

        else if (strcmp(info[i].major, str) == 0)
        {
            printf("%s, ", info[i].leader_yn);
            fprintf(ofp, "%s, ", info[i].leader_yn);
            printf("%s, ", info[i].corp_name);
            fprintf(ofp, "%s, ", info[i].corp_name);
            printf("%s, ", info[i].name);
            fprintf(ofp, "%s, ", info[i].name);
            printf("%s, ", info[i].email);
            fprintf(ofp, "%s, ", info[i].email);
            printf("%s, ", info[i].univ);
            fprintf(ofp, "%s, ", info[i].univ);
            printf("%s\n", info[i].major);
            fprintf(ofp, "%s\n", info[i].major);

            if (strcmp(info[i].leader_yn, "����") == 0)
            {
                int j;
                for (j = i + 1; j < i + 4; j++)
                {
                    printf("%s, ", info[i].leader_yn);
                    fprintf(ofp, "%s, ", info[i].leader_yn);
                    printf("%s, ", info[i].corp_name);
                    fprintf(ofp, "%s, ", info[i].corp_name);
                    printf("%s, ", info[i].name);
                    fprintf(ofp, "%s, ", info[i].name);
                    printf("%s, ", info[i].email);
                    fprintf(ofp, "%s, ", info[i].email);
                    printf("%s, ", info[i].univ);
                    fprintf(ofp, "%s, ", info[i].univ);
                    printf("%s\n", info[i].major);
                    fprintf(ofp, "%s\n", info[i].major);
                }
            }

        }

        else if (strcmp(info[i].univ, str) == 0)
        {
            printf("%s, ", info[i].leader_yn);
            fprintf(ofp, "%s, ", info[i].leader_yn);
            printf("%s, ", info[i].corp_name);
            fprintf(ofp, "%s, ", info[i].corp_name);
            printf("%s, ", info[i].name);
            fprintf(ofp, "%s, ", info[i].name);
            printf("%s, ", info[i].email);
            fprintf(ofp, "%s, ", info[i].email);
            printf("%s, ", info[i].univ);
            fprintf(ofp, "%s, ", info[i].univ);
            printf("%s\n", info[i].major);
            fprintf(ofp, "%s\n", info[i].major);

            if (strcmp(info[i].leader_yn, "����") == 0)
            {
                int j;
                for (j = i + 1; j < i + 4; j++)
                {
                    printf("%s, ", info[i].leader_yn);
                    fprintf(ofp, "%s, ", info[i].leader_yn);
                    printf("%s, ", info[i].corp_name);
                    fprintf(ofp, "%s, ", info[i].corp_name);
                    printf("%s, ", info[i].name);
                    fprintf(ofp, "%s, ", info[i].name);
                    printf("%s, ", info[i].email);
                    fprintf(ofp, "%s, ", info[i].email);
                    printf("%s, ", info[i].univ);
                    fprintf(ofp, "%s, ", info[i].univ);
                    printf("%s\n", info[i].major);
                    fprintf(ofp, "%s\n", info[i].major);
                }
            }

        }

        else if (strcmp(info[i].leader_yn, str) == 0)
        {
            printf("%s, ", info[i].leader_yn);
            fprintf(ofp, "%s, ", info[i].leader_yn);
            printf("%s, ", info[i].corp_name);
            fprintf(ofp, "%s, ", info[i].corp_name);
            printf("%s, ", info[i].name);
            fprintf(ofp, "%s, ", info[i].name);
            printf("%s, ", info[i].email);
            fprintf(ofp, "%s, ", info[i].email);
            printf("%s, ", info[i].univ);
            fprintf(ofp, "%s, ", info[i].univ);
            printf("%s\n", info[i].major);
            fprintf(ofp, "%s\n", info[i].major);


        }

        else if (strcmp(info[i].email, str) == 0)
        {
            printf("%s, ", info[i].leader_yn);
            fprintf(ofp, "%s, ", info[i].leader_yn);
            printf("%s, ", info[i].corp_name);
            fprintf(ofp, "%s, ", info[i].corp_name);
            printf("%s, ", info[i].name);
            fprintf(ofp, "%s, ", info[i].name);
            printf("%s, ", info[i].email);
            fprintf(ofp, "%s, ", info[i].email);
            printf("%s, ", info[i].univ);
            fprintf(ofp, "%s, ", info[i].univ);
            printf("%s\n", info[i].major);
            fprintf(ofp, "%s\n", info[i].major);

            if (strcmp(info[i].leader_yn, "����") == 0)
            {
                int j;
                for (j = i + 1; j < i + 4; j++)
                {
                    printf("%s, ", info[i].leader_yn);
                    fprintf(ofp, "%s, ", info[i].leader_yn);
                    printf("%s, ", info[i].corp_name);
                    fprintf(ofp, "%s, ", info[i].corp_name);
                    printf("%s, ", info[i].name);
                    fprintf(ofp, "%s, ", info[i].name);
                    printf("%s, ", info[i].email);
                    fprintf(ofp, "%s, ", info[i].email);
                    printf("%s, ", info[i].univ);
                    fprintf(ofp, "%s, ", info[i].univ);
                    printf("%s\n", info[i].major);
                    fprintf(ofp, "%s\n", info[i].major);
                }
            }

        }
    }
    fprintf(ofp, "%s\n", timebuf);
    fclose(ofp);
}
