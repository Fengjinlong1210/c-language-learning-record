#define _CRT_SECURE_NO_WARNINGS 1
#include "DLlist.h"

ListNode* DLLInit()
{
	ListNode* phead = CreateNode(-1);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

ListNode* CreateNode(DataType val)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	if (!newnode)
	{
		perror("CreateNode: malloc");
		exit(-1);
	}
	else
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		newnode->val = val;
		return newnode;
	}
}

void Print(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
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

void DLLPushFront(ListNode* phead, DataType val)
{
	assert(phead);
	ListNode* newnode = CreateNode(val);

	//新结点衔接后一个
	phead->next->prev = newnode;
	newnode->next = phead->next;
	
	//头结点衔接新结点
	phead->next = newnode;
	newnode->prev = phead;
}

void DLLPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);

	ListNode* cur = phead->next;
	ListNode* follow = phead->next->next;

	phead->next = follow;
	follow->prev = phead;

	free(cur);

}

void DLLPushBack(ListNode* phead, DataType val)
{
	assert(phead);
	ListNode* newnode = CreateNode(val);
	ListNode* tail = phead->prev;

	//尾部链接新结点
	tail->next = newnode;
	newnode->prev = tail;
	//新结点链接头
	newnode->next = phead;
	phead->prev = newnode;

}

void DLLPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	//tail是倒数第一个结点
	ListNode* tail = phead->prev;
	//tailprev是倒是第二个
	ListNode* tailprev = phead->prev->prev;

	//倒数第二个链接头
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
}

ListNode* DLLFind(ListNode* phead, DataType val)
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

void DLLInsertNode(ListNode* pos, DataType val)
{
	assert(pos);
	ListNode* newnode = CreateNode(val);
	//链接前一个和新结点
	pos->prev->next = newnode;
	newnode->prev = pos->prev;
	//链接新结点和pos
	newnode->next = pos;
	pos->prev = newnode;

}


void DLLDeleteNode(ListNode* pos)
{
	assert(pos);
	assert(pos->next != pos);
	ListNode* posprev = pos->prev;
	ListNode* posnext = pos->next;
	pos->next->prev = posprev;
	pos->prev->next = posnext;
	free(pos);
}