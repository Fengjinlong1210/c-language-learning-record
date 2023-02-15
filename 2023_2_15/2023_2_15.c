#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

int main()
{
	heap HP;
	HeapInit(&HP);
	int arr[] = { 12,56,84,32,47,62,25,13,69,36 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	HeapCreate(&HP, arr, sz);
	Print(&HP);
	return 0;
}