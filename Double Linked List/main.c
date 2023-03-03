#define _CRT_SECURE_NO_WARNINGS 1
#include "DoubleLinkedList.h"

int main()
{
	DLNode* head = DLInitHead();
	DLPushBack(head, 1);
	DLPushBack(head, 2);
	DLPushBack(head, 3);
	DLPushBack(head, 4);
	DLPushBack(head, 5);
	DLPushBack(head, 6);
	DLPushBack(head, 7);
	DLPopBack(head);
	DLPrint(head);
	DLPushHead(head, 20);
	DLPushHead(head, 10);
	DLPrint(head);
	DLNode* ret =  DLFindNode(head, 10);
	DLInsertBack(head, ret, 5);
	DLPrint(head);
	DLDeletePos(head, ret);
	DLPrint(head);
	DLDistroy(head);
	return 0;
}