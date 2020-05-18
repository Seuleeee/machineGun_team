#pragma once
#include <stdio.h>
#include <math.h>

void input_number();
int max_num(int arr[]);
int min_num(int arr[]);
double avg_num(int arr[]);
double deviation_num(int arr[], double avg);

//1. 숫자입력
void input_number()
{
    printf("10개의 숫자를 입력하세요.\n");

    int arrNum[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf_s("%d", &arrNum[i]);
    }

    int maxNum = max_num(arrNum);
    int minNum = min_num(arrNum);
    double avgNum = avg_num(arrNum);
    double devNum = deviation_num(arrNum, avgNum);

    printf("최대값 : %d\n", maxNum);
    printf("최소값 : %d\n", minNum);
    printf("평균값 : %lf\n", avgNum);
    printf("표준편차 : %lf\n", devNum);

    return;
}

//2. 최대값 출력
int max_num(int arr[])
{
    int max = arr[5];
    int i;
    for (i = 0; i < 10; i++)
    {  
        if (arr[i] > max)
        {
            max = arr[i];
        }
    } 

    return max;
}

//3. 최소값 출력
int min_num(int arr[])
{
    int min = arr[0];
    int i;
    for (i = 0; i < 10; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

//4. 평균 출력
double avg_num(int arr[])
{
    double sum = 0.0;
    int i;
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    double avg = sum /= 10.0;
    return avg;
}

//5. 표준편차 출력
double deviation_num(int arr[], double avg)
{
    double dispersion; //분산
    double sigma; //표준편차
    int i;
    double sum = 0.0;
    for (i = 0; i < 10; i++)
    {
        sum += pow((arr[i] - avg), 2);
    }
    dispersion = sum / 10.0; //분산
    sigma = sqrt(dispersion);

    return sigma;
}
