#define _CRT_SECURE_NO_WARNINGS 1
#include "circularlist.h"

SLNode* SLInitHead()
{
	SLNode* head = NULL;
	SLNode* tmp = (SLNode*)malloc(sizeof(SLNode));
	if (!tmp)
	{
		perror("malloc");
		return NULL;
	}
	head = tmp;
	head->val = -1;
	head->next = NULL;
	return head;
}


SLNode* SLBuyNode(SLDataType val)
{
	SLNode* newnode = NULL;
	SLNode* tmp = (SLNode*)malloc(sizeof(SLNode));
	if (!tmp)
	{
		perror("malloc");
		return NULL;
	}
	newnode = tmp;
	newnode->next = NULL;
	newnode->val = val;

	return newnode;
}


void SLPushBack(SLNode* phead, SLDataType val)
{
	assert(phead);
	SLNode* cur = phead->next;
	SLNode* newnode = SLBuyNode(val);
	if (!newnode)
	{
		perror("PushBack malloc");
		return;
	}
	//第一次插入元素
	if (!phead->next)
	{
		phead->next = newnode;
		newnode->next = newnode;
		return;
	}
	while (cur->next != phead->next)
	{
		cur = cur->next;
	}
	cur->next = newnode;
	newnode->next = phead->next;
}


void SLDelete(SLNode* phead, SLNode* pos)
{
	assert(phead);
	assert(pos);
	SLNode* posprev = phead->next;
	SLNode* posnext = pos->next;
	while (posprev->next != pos)
	{
		posprev = posprev->next;
	}
	posprev->next = posnext;
	free(pos);
}

void SLDistroy(SLNode* phead)
{
	assert(phead);
	if (!phead->next)
	{
		free(phead);
		return;
	}
	SLNode* cur = phead->next;
	SLNode* curnext = cur->next;
	while (cur)
	{
		free(cur);
		cur = curnext;
		if (curnext)
		{
			curnext = curnext->next;
		}
	}
	free(phead);
}

void SLPrint(SLNode* phead)
{
	assert(phead);
	assert(phead->next);
	SLNode* cur = phead->next;
	int i = 0;
	for (i = 0; i < SLSize(phead); i++)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

int SLSize(SLNode* phead)
{
	assert(phead);
	if (!phead->next)
	{
		return 0;
	}
	SLNode* cur = phead->next;
	int count = 0;
	while (cur->next != phead->next)
	{
		cur = cur->next;
		count++;
	}
	return count + 1;
}