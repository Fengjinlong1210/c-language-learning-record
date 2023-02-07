#define _CRT_SECURE_NO_WARNINGS 1
#include "DLlist.h"

void Test1()
{
	//DLLPushFront(plist, 10);
//DLLPushFront(plist, 20);
//DLLPushFront(plist, 30);
//DLLPushFront(plist, 40);
//Print(plist);

//DLLPopFront(plist);
//DLLPopFront(plist);
//Print(plist);

	//DLLPushBack(plist, 30);
	//DLLPushBack(plist, 40);
	//DLLPushBack(plist, 50);
	//DLLPushBack(plist, 60);


	////Print(plist);
	////DLLPopBack(plist);
	//Print(plist);
	//ListNode* ret = DLLFind(plist, 50);
	//PrintNode(ret);
}

int main()
{
	ListNode* plist = DLLInit();
	//DLLInsertNode(plist, 10);
	//ListNode* ret = DLLFind(plist, 10);
	//DLLInsertNode(ret, 20);
	//DLLInsertNode(ret, 30);
	//DLLInsertNode(ret, 40);

	//DLLInsertNode(plist, 30);
	//DLLInsertNode(plist, 40);

	//Print(plist);
	DLLDeleteNode(plist);
	//Print(plist);

	return 0;
}