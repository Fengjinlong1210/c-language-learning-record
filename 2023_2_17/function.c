#define _CRT_SECURE_NO_WARNINGS 1
#include "statement.h"

slist* CreateNode(datatype value)
{
	slist* newnode = (slist*)malloc(sizeof(slist));
	if (!newnode)
	{
		perror("malloc");
		exit(-1);
	}
	newnode->next = NULL;
	newnode->val = value;
	return newnode;
}

slist* Find(slist* phead, datatype value)
{
	assert(phead);
	slist* cur = phead;
	while (cur)
	{
		if (cur->val == value)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}


void PushBack(slist** pphead, datatype value)
{
	assert(pphead);
	slist* newnode = CreateNode(value);
	if ((*pphead) == NULL)
	{
		//处理链表没有结点的情况
		*pphead = newnode;
	}
	else
	{
		slist* cur = *pphead;
		//找尾
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}

}

void PopBack(slist** pphead)
{
	assert(pphead);
	assert(*pphead);
	slist* tail = *pphead;
	slist* prev = *pphead;

	while (tail->next)
	{
		tail = tail->next;
		if (tail->next != NULL)
			prev = prev->next;
	}
	prev->next = NULL;
	free(tail);
}

void InsertBack(slist** pphead, slist* pos, datatype value)
{
	assert(pphead);
	assert(pos);
	slist* posnext = pos->next;
	slist* newnode = CreateNode(value);
	pos->next = newnode;
	newnode->next = posnext;
}

void Print(slist* pl)
{
	assert(pl);
	slist* cur = pl;
	while (cur)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

void PushFront(slist** pphead, datatype value)
{
	assert(pphead);
	slist* newnode = CreateNode(value);
	newnode->next = *pphead;
	(*pphead) = newnode;
}

void PopFront(slist** pphead)
{
	assert(pphead);
	assert(*pphead);
	slist* cur = *pphead;
	slist* curnext = (*pphead)->next;
	free(cur);
	cur = NULL;
	*pphead = curnext;
}
