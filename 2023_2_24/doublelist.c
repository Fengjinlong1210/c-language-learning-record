#define _CRT_SECURE_NO_WARNINGS 1
#include "doublelist.h"

ListNode* DLlCreateNode(datatype val)
{
	ListNode* newnode = NULL;
	ListNode* tmp = (ListNode*)malloc(sizeof(ListNode));
	if (!tmp)
	{
		perror("malloc");
		return NULL;
	}
	newnode = tmp;
	newnode->next = newnode->prev = NULL;
	newnode->val = val;
	return newnode;
}

ListNode* InitHead()
{
	ListNode* phead = DLlCreateNode(-1);
	phead->next = phead;
	phead->prev = phead;
	phead->val = -1;
	return phead;
}


void DLlPushFront(ListNode* phead, datatype val)
{
	ListNode* newnode = DLlCreateNode(val);
	ListNode* cur = phead->next;
	
	//新结点链接第一个结点
	newnode->next = cur;
	cur->prev = newnode;

	//头结点链接新结点
	phead->next = newnode;
	newnode->prev = phead;

}

void DLlPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

void DLlPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* cur = phead->next;
	ListNode* curnext = cur->next;

	//
	phead->next = curnext;
	curnext->prev = phead;
	free(cur);
}

void DLlPushBack(ListNode* phead, datatype val)
{
	assert(phead);
	ListNode* newnode = DLlCreateNode(val);
	ListNode* tail = phead->prev;
	tail->next = newnode;
	newnode->prev = tail;

	phead->prev = newnode;
	newnode->next = phead;
}

void DLlPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead != phead->next);
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;

	free(tail);
}

ListNode* FindNode(ListNode* phead, ListNode* pos, datatype val)
{
	assert(phead);
	assert(pos);
	ListNode* cur = pos->next;
	while (cur != phead)
	{
		if (cur->val == val)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void DLlDistroy(ListNode* phead)
{
	//保留后一个结点
	//删除前一个结点
	assert(phead);
	ListNode* cur = phead;
	ListNode* curnext = cur->next;
	while (cur != phead)
	{
		ListNode* tmp = cur;
		free(tmp);
		cur = curnext;
		curnext = cur->next;
	}
	free(phead);
	phead = NULL;
}

void DelPos(ListNode* pos)
{
	assert(pos);
	ListNode* posprev = pos->prev;
	ListNode* posnext = pos->next;
	posprev->next = posnext;
	posnext->prev = posprev;

	free(pos);

}

void InsertNode(ListNode* pos, datatype val)
{
	assert(pos);
	ListNode* newnode = CreateNode(val);
	ListNode* posprev = pos->prev;
	//ListNode* posnext = pos->next;

	//
	newnode->next = pos;
	pos->prev = newnode;

	newnode->prev = posprev;
	posprev->next = newnode;
}
