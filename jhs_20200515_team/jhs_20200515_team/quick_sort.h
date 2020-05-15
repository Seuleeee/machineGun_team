#pragma once
#include <stdio.h>

void swap(int arr[], int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;

}

int partition(int arr[], int right, int left)
{
	int pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high)
	{
		while (low <= right && pivot >= arr[low])
		{
			low++;
		}
		while (high >= (left + 1) && pivot <= arr[high])
		{
			high--;
		}
		if (low <= high)
		{
			swap(arr, low, high);
		}
	}
	swap(arr, left, high);
	return high;

}

void quicksort(int arr[], int right, int left)
{
	if (left <= right)
	{
		int pivot = partition(arr, left, right);
		quicksort(arr, left, pivot - 1);
		quicksort(arr, pivot + 1, right);
	}
}