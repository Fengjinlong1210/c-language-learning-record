#define _CRT_SECURE_NO_WARNINGS 1
//#include "singlelist.h"
#include "doublelist.h"


//SLl* list = NULL;

//void Test1()
//{
//	PushBack(&list, 100);
//	PushBack(&list, 200);
//	PushBack(&list, 500);
//	
//	Print(&list);
//	SLl* ret = FindData(&list, list, 500);
//	PosInsert(&list, ret, 10);
//	Print(&list);
//	PosInsertFront(&list, ret, 20);
//	Print(&list);
//	DeletePos(&list, ret);
//	Print(&list);
//	Distroy(&list);
//
//}

void Test2()
{
	ListNode* list = InitHead();
	DLlPushFront(list, 1);
	DLlPushFront(list, 2);
	DLlPushFront(list, 3);
	DLlPushFront(list, 4);
	DLlPushFront(list, 5);
	DLlPrint(list);
	DLlPopFront(list);
	DLlPrint(list);
	DLlPopFront(list);
	DLlPopFront(list);
	DLlPopFront(list);
	DLlPopFront(list);
	DLlPushBack(list, 1);
	DLlPushBack(list, 2);
	DLlPushBack(list, 3);
	DLlPushBack(list, 4);
	DLlPushBack(list, 5);
	DLlPushBack(list, 1);
	DLlPushBack(list, 1);
	DLlPushBack(list, 1);
	DLlPushBack(list, 1);
	DLlPushBack(list, 1);

	DLlPrint(list);
	DLlPopBack(list);
	DLlPrint(list);
}

int main()
{
	//Test1();
	Test2();
	return 0;
}