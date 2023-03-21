#define _CRT_SECURE_NO_WARNINGS 1
#include "sort.h"

int main()
{
	int arr[] = { 2,8,4,6,8,5,9,3,7,0 };
	CountingSort(arr, sizeof(arr) / sizeof(int));
	
	return 0;
}