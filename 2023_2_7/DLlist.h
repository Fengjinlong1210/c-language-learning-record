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

//��ʼ��
ListNode* DLLInit();

//��ӡ
void Print(ListNode* phead);
void PrintNode(ListNode* node);

//�������
ListNode* CreateNode(DataType val);

//ͷ��
void DLLPushFront(ListNode* phead, DataType val);

//ͷɾ
void DLLPopFront(ListNode* phead);

//β��
void DLLPushBack(ListNode* phead, DataType val);

//βɾ
void DLLPopBack(ListNode* phead);

//����
ListNode* DLLFind(ListNode* phead, DataType val);

//��posǰ������
void DLLInsertNode(ListNode* pos, DataType val);

//ɾ��posλ�õĽ��
void DLLDeleteNode(ListNode* pos);