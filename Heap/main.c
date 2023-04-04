#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

HP hp;

int main()
{
	int arr[] = { 5,9,44,16,90,1,38,74,23 };
	HeapInit(&hp);
	HeapCreate(&hp, arr, sizeof(arr) / sizeof(HPDatetype));
	HeapPush(&hp, 10);
	HeapPush(&hp, 11);
	HeapPush(&hp, 20);
	HeapPush(&hp, 30);
	HeapPush(&hp, 40);
	HeapPush(&hp, 50);
	HeapPush(&hp, 60);

	HeapPop(&hp);
	HeapPrint(&hp);
	return 0;
}