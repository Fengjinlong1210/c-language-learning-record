#define _CRT_SECURE_NO_WARNINGS 1
#include "singlelist.h"

SLl* CreateNode(datatype val)
{
	SLl* newnode = NULL;
	SLl* tmp = (SLl*)malloc(sizeof(SLl));
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

void Print(SLl** pphead)
{
	assert(*pphead);
	SLl* cur = *pphead;
	while (cur)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}


void PushBack(SLl** pphead, datatype val)
{
	assert(pphead);
	SLl* newnode = CreateNode(val);
	//处理链表为空的情况
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		//找尾
		SLl* cur = *pphead;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
}

void PopBack(SLl** pphead)
{
	assert(*pphead);
	SLl* cur = *pphead;
	if (cur->next == NULL)
	{
		free(cur);
		*pphead = NULL;
	}
	else
	{
		SLl* prev = *pphead;
		while (cur->next)
		{
			cur = cur->next;
			if (cur->next)
			{
				prev = prev->next;
			}
		}
		free(cur);
		prev->next = NULL;
	}
}

void PushFront(SLl** pphead, datatype val)
{
	assert(pphead);
	SLl* newnode = CreateNode(val);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLl* cur = *pphead;
		*pphead = newnode;
		newnode->next = cur;
	}
}

void PopFront(SLl** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLl* cur = *pphead;
	if (cur->next == NULL)
	{
		free(cur);
		*pphead = NULL;
	}
	else
	{
		SLl* curnext = cur->next;
		*pphead = curnext;
		free(cur);
	}
}

SLl* FindData(SLl** pphead, SLl* pos, datatype val)
{
	assert(pphead);
	assert(*pphead);
	SLl* cur = pos;
	while (pos)
	{
		if (pos->val == val)
		{
			return pos;
		}
		pos = pos->next;
	}
	return NULL;
}

void PosInsert(SLl** pphead, SLl* pos, datatype val)
{
	assert(pphead);
	assert(pos);
	SLl* posnext = pos->next;
	SLl* newnode = CreateNode(val);
	pos->next = newnode;
	newnode->next = posnext;

}

void PosInsertFront(SLl** pphead, SLl* pos, datatype val)
{
	assert(pphead);
	assert(pos);
	SLl* newnode = CreateNode(val);
	SLl* posprev = *pphead;

	while (posprev->next != pos)
	{
		posprev = posprev->next;
	}
	posprev->next = newnode;
	newnode->next = pos;
}

void DeletePos(SLl** pphead, SLl* pos)
{
	assert(pphead);
	assert(pos);
	SLl* posnext = pos->next;
	SLl* posprev = *pphead;
	while (posprev->next != pos)
	{
		posprev = posprev->next;
	}
	posprev->next = posnext;
	free(pos);
}

void Distroy(SLl** pphead)
{
	assert(pphead);
	assert(*pphead);
	SLl* cur = *pphead;
	SLl* curnext = NULL;
	SLl* tmp = NULL;

	while (cur)
	{
		tmp = cur;
		curnext = cur->next;
		cur = curnext;
		free(tmp);

	}
	*pphead = NULL;
}

