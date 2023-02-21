#define _CRT_SECURE_NO_WARNINGS 1
#include "TopK.h"

heap HP;

int main()
{
	datatype arr[] = { 12,56,13,81,92,35,74,66,47,6 };
	CreateHeap(&HP, arr, (sizeof(arr) / sizeof(arr[0])));
	//Print(&HP);
	//PushHeap(&HP, 100);
	//Print(&HP);
	//PopHeap(&HP);
	//Print(&HP);
	HeapSort(&HP);
	Print(&HP);
	TopK(arr, (sizeof(arr) / sizeof(arr[0])), 5);
	DistroyHeap(&HP);
	return 0;
}