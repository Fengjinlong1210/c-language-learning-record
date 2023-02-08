#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	DataType val;
}ListNode;

//�������
ListNode* CreateNode(DataType val);

//
void PrintList(ListNode* phead);
void PrintNode(ListNode* node);

//��ʼ��
ListNode* InitNode();

//����
ListNode* FindNode(ListNode* phead, DataType val);

//posǰ����
void InsertNode(ListNode* pos, DataType val);

//ɾ��pos
void EraseNode(ListNode* pos);

//β��
void PushBack(ListNode* phead, DataType val);

//βɾ
void PopBack(ListNode* phead);

//ͷ��
void PushFront(ListNode* phead, DataType val);

//ͷɾ
void PopFront(ListNode* phead);

void ListDistroy(ListNode* phead);