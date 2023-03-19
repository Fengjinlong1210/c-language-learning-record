#define _CRT_SECURE_NO_WARNINGS 1
#include "SingleLinkedList.h"

SLNode* BuyNode(SLDataType val)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
	if (!newnode)
	{
		perror("BuyNode malloc");
		return NULL;
	}
	newnode->next = NULL;
	newnode->val = val;
	return newnode;
}

void SLPushBack(SLNode** pphead, SLDataType val)
{
	assert(pphead);
	if (!(*pphead))
	{
		SLInsertPos(pphead, *pphead, val);
		return;
	}
	//找尾
	SLNode* cur = *pphead;
	while (cur->next)
	{
		cur = cur->next;
	}
	//cur->next == NULL
	SLInsertPos(pphead, cur, val);
}

void SLPopBack(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLNode* cur = *pphead;
	while (cur->next)
	{
		cur = cur->next;
	}
	SLDeletePos(pphead, cur);
}

void SLPushFront(SLNode** pphead, SLDataType val)
{
	assert(pphead);
	SLNode* cur = *pphead;
	SLNode* newnode = BuyNode(val);
	*pphead = newnode;
	newnode->next = cur;
}

void SLPopFront(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLDeletePos(pphead, *pphead);
}


void SLInsertPos(SLNode** pphead, SLNode* pos, SLDataType val)
{
	//在pos后插入
	assert(pphead);
	SLNode* newnode = BuyNode(val);
	if (!*pphead)
	{
		//链表为空
		*pphead = newnode;
		return;
	}

	SLNode* posnext = pos->next;
	pos->next = newnode;
	newnode->next = posnext;
}

void SLDeletePos(SLNode** pphead, SLNode* pos)
{
	assert(pphead);
	assert(*pphead);
	assert(pos);
	SLNode* posnext = pos->next;
	SLNode* cur = *pphead;
	//用cur找到pos的前一个位置
	if (cur == pos)
	{
		*pphead = posnext;
		free(cur);
		return;
	}
	while (cur->next != pos)
	{
		cur = cur->next;
	}
	//cur->next == pos
	cur->next = posnext;
	free(pos);

}

SLNode* SLFind(SLNode** pphead, SLDataType val)
{
	assert(pphead);
	assert(*pphead);
	SLNode* cur = *pphead;
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

void SLPrint(SLNode** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLNode* cur = *pphead;
	while (cur)
	{
		printf("%d->", cur->val);
		cur = cur->next;
	}
	printf("NULL\n");
}


void SLDistroy(SLNode** pphead)
{
	assert(pphead);
	SLNode* cur = *pphead;
	SLNode* curnext = cur->next;
	while (cur)
	{
		free(cur);
		cur = curnext;
		if (cur)
		{
			curnext = cur->next;
		}
	}
	*pphead = NULL;
}
