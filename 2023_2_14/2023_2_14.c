#define _CRT_SECURE_NO_WARNINGS 1
#include "heap.h"

int main()
{
	heap HP;
	HeapInit(&HP);
	HeapPush(&HP, 1);
	HeapPush(&HP, 2);
	HeapPush(&HP, 5);
	HeapPush(&HP, 3);
	HeapPush(&HP, 7);
	HeapPush(&HP, 1);
	HeapPush(&HP, 10);

	return 0;
}