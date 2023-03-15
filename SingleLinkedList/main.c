#define _CRT_SECURE_NO_WARNINGS 1
#include "SingleLinkedList.h"

//指向链表的指针
SLNode* plist = NULL;

void Test()
{
	SLPushFront(&plist, 1);
	SLPushBack(&plist, 2);
	SLNode* ret = SLFind(&plist, 2);
	SLInsertPos(&plist, ret, 3);
	SLPrint(&plist);
	SLDeletePos(&plist, ret);
	SLPrint(&plist);
	SLPushFront(&plist, 10);
	SLPrint(&plist);
	SLPopFront(&plist);
	SLPrint(&plist);
	SLPopBack(&plist);
	SLPrint(&plist);

}

int main()
{
	Test();
	return 0;
}