#define _CRT_SECURE_NO_WARNINGS 1
#include "singlelist.h"

SLl* list = NULL;

void Test1()
{
	PushBack(&list, 100);
	PushBack(&list, 100);
	PushBack(&list, 100);
	PushBack(&list, 100);
	PushBack(&list, 100);

	PushBack(&list, 200);
	PopBack(&list);
	PushBack(&list, 300);
	PushBack(&list, 400);
	PushFront(&list, 10);
	Print(&list);
	PopFront(&list);
	Print(&list);
	SLl* ret = NULL;
	SLl* pos = list;
	while (ret = FindData(&list, pos, 100))
	{
		printf("%d ", ret->val);
		pos = ret->next;
	}
	//printf("%d \n", ret->val);
}

int main()
{
	Test1();
	return 0;
}