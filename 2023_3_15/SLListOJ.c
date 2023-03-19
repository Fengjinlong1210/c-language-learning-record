#define _CRT_SECURE_NO_WARNINGS 1
#include "SLListOJ.h"

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

void SLPushHead(SLNode* phead, SLDataType val)
{
	assert(phead);
	SLNode* cur = phead->next;
	SLNode* newnode = SLBuyNode(val);
	if (!newnode)
	{
		return;
	}
	phead->next = newnode;
	newnode->next = cur;

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
	//¦Â
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = newnode;
}

void SLPopHead(SLNode* phead)
{
	assert(phead);
	assert(phead->next);
	SLNode* cur = phead->next;
	SLNode* curnext = cur->next;
	phead->next = curnext;
	free(cur);
}

void SLPopBack(SLNode* phead)
{
	assert(phead);
	assert(phead->next);
	SLNode* tail = phead->next;
	SLNode* tailprev = phead->next;
	while (tail->next)
	{
		tail = tail->next;
		if (tail->next)
		{
			tailprev = tailprev->next;
		}
	}
	tailprev->next = NULL;
	free(tail);
}

SLNode* SLFindNode(SLNode* phead, SLDataType val)
{
	assert(phead);
	assert(phead->next);
	SLNode* cur = phead->next;
	while (cur)
	{
		if (cur->val == val)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void SLInsertBack(SLNode* phead, SLNode* pos, SLDataType val)
{
	assert(phead);
	assert(pos);
	SLNode* newnode = SLBuyNode(val);
	SLNode* posnext = pos->next;
	pos->next = newnode;
	newnode->next = posnext;
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
	while (cur)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

SLNode* Partition(SLNode* phead, int x)
{
	assert(phead);
	SLNode* cur = phead->next;
	SLNode* lesshead, * lesstail;
	SLNode* greaterhead, * greatertail;
	lesshead = lesstail = (SLNode*)malloc(sizeof(SLNode));
	greaterhead = greatertail = (SLNode*)malloc(sizeof(SLNode));
	while (cur)
	{
		if (cur->val < x)
		{
			lesstail->next = cur;
			lesstail = lesstail->next;
		}
		else
		{
			greatertail->next = cur;
			greatertail = greatertail->next;
		}
		cur = cur->next;
	}
	SLNode* newhead = lesshead->next;
	lesstail->next = greaterhead->next;
	greatertail->next = NULL;
	return newhead;
}
