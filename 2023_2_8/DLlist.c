#pragma once
#include "DLlist.h"

ListNode* CreateNode(DataType val)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (!newnode)
	{
		perror("CreateNode: malloc");
		return NULL;
	}
	else
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->val = val;
		return newnode;
	}
}

ListNode* InitNode()
{
	ListNode* phead = CreateNode(-1);
	phead->next = phead;
	phead->prev = phead;
	phead->val = -1;
	return phead;
}

void PrintList(ListNode* phead)
{
	assert(phead);
	//assert(phead->next != phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}

void PrintNode(ListNode* node)
{
	assert(node);
	printf("%d ", node->val);
}

ListNode* FindNode(ListNode* phead, DataType val)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* cur = phead->next;
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

void InsertNode(ListNode* pos, DataType val)
{
	assert(pos);
	ListNode* newnode = CreateNode(val);
	ListNode* posprev = pos->prev;
	//ListNode* posnext = pos->next;

	//Á´½Ó
	newnode->next = pos;
	pos->prev = newnode;

	newnode->prev = posprev;
	posprev->next = newnode;
}

void EraseNode(ListNode* pos)
{
	assert(pos);
	ListNode* posnext = pos->next;
	ListNode* posprev = pos->prev;

	posnext->prev = posprev;
	posprev->next = posnext;

	free(pos);
}

void PushBack(ListNode* phead, DataType val)
{
	assert(phead);
	InsertNode(phead, val);
}

void PopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	EraseNode(phead->prev);
}

void PushFront(ListNode* phead, DataType val)
{
	assert(phead);
	InsertNode(phead->next, val);
}

void PopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	EraseNode(phead->next);
}


void ListDistroy(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;
	ListNode* curnext = cur->next;

	while (cur != phead)
	{
		free(cur);
		cur = curnext;
		curnext = curnext->next;
	}
	free(phead);
}