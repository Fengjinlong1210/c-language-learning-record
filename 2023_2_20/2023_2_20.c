#define _CRT_SECURE_NO_WARNINGS 1
#include "heap3.h"

void Test1()
{
	heap hp;
	int arr[] = { 123,415,65,48,659,16,74,699,30,12 };
	CreateHeap(&hp, arr, (sizeof(arr) / sizeof(arr[0])));
	HeapSort(&hp);
	Print(&hp);
}

int main()
{
	Test1();
	return 0;
}