#define _CRT_SECURE_NO_WARNINGS 1
#include "DoubleLinkedList.h"

DLNode* DLInitHead()
{
	DLNode* head = (DLNode*)malloc(sizeof(DLNode));
	if (!head)
	{
		perror("DLInitHead: malloc");
		return NULL;
	}
	head->next = head->prev = head;
	head->val = -1;

	return head;
}

DLNode* DLBuyNode(DLDataType val)
{
	DLNode* newnode = (DLNode*)malloc(sizeof(DLNode));
	if (!newnode)
	{
		perror("DLBuyNode: malloc");
		return NULL;
	}
	newnode->next = newnode->prev = NULL;
	newnode->val = val;

	return newnode;
}

void DLPushHead(DLNode* phead, DLDataType val)
{
	assert(phead);
	DLNode* newnode = DLBuyNode(val);
	DLNode* cur = phead->next;
	
	phead->next = newnode;
	newnode->prev = phead;

	newnode->next = cur;
	cur->prev = newnode;
}

void DLPopHead(DLNode* phead)
{
	assert(phead);
	assert(phead->next);
	DLNode* cur = phead->next;
	DLNode* curnext = cur->next;

	phead->next = curnext;
	curnext->prev = phead;
	free(cur);
}

void DLPushBack(DLNode* phead, DLDataType val)
{
	assert(phead);
	DLNode* newnode = DLBuyNode(val);
	DLNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;

	newnode->next = phead;
	phead->prev = newnode;
}

void DLPopBack(DLNode* phead) 
{
	assert(phead);
	assert(phead->prev);
	DLNode* tail = phead->prev;
	DLNode* tailprev = tail->prev;

	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
}

DLNode* DLFindNode(DLNode* phead, DLDataType val)
{
	assert(phead);
	assert(phead->next);
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->val = val)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void DLInsertBack(DLNode* phead, DLNode* pos, DLDataType val)
{
	assert(phead);
	assert(pos);
	DLNode* newnode = DLBuyNode(val);
	DLNode* posnext = pos->next;

	newnode->next = posnext;
	posnext->prev = newnode;

	pos->next = newnode;
	newnode->prev = pos->next;
}

void DLDeletePos(DLNode* phead, DLNode* pos)
{
	assert(phead);
	assert(pos);
	assert(phead->next);
	DLNode* posprev = pos->prev;
	DLNode* posnext = pos->next;

	posprev->next = posnext;
	posnext->prev = posprev;
	free(pos);
}

void DLDistroy(DLNode* phead)
{
	assert(phead);
	if (!phead->next)
	{
		free(phead);
		return;
	}
	
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		DLNode* curnext = cur->next;
		free(cur);
		cur = curnext;
		curnext = curnext->next;
	}
	free(phead);
}

void DLPrint(DLNode* phead)
{
	assert(phead);
	assert(phead->next);
	DLNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}






