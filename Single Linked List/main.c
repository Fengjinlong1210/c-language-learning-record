#define _CRT_SECURE_NO_WARNINGS 1
#include "singlelist.h"


int main()
{
	SLNode* head = SLInitHead();
	SLPushHead(head, 1);
	SLPushHead(head, 2);
	SLPushHead(head, 3);
	SLPushHead(head, 4);
	SLPushHead(head, 5);
	SLPushHead(head, 6);

	SLPushBack(head, 0);
	SLPopHead(head);
	SLPopBack(head);
	SLNode* ret = SLFindNode(head, 1);
	SLInsertBack(head, ret, 10);
	SLDelete(head, ret);
	SLPrint(head);
	SLDistroy(head);
	return 0;
}