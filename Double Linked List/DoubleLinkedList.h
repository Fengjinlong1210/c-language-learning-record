#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//��ͷ˫��ѭ������
typedef int DLDataType;

typedef struct DLNode
{
	DLDataType val;
	struct DouobleListNode* next;
	struct DouobleListNode* prev;
}DLNode;

//��ʼ��������ͷ���
DLNode* DLInitHead();

//�����½��
DLNode* DLBuyNode(DLDataType val);

//ͷ��
void DLPushHead(DLNode* phead, DLDataType val);

//ͷɾ
void DLPopHead(DLNode* phead);

//β��
void DLPushBack(DLNode* phead, DLDataType val);

//βɾ
void DLPopBack(DLNode* phead);

//����
DLNode* DLFindNode(DLNode* phead, DLDataType val);

//pos����
void DLInsertBack(DLNode* phead, DLNode* pos, DLDataType val);

//posɾ��
void DLDeletePos(DLNode* phead, DLNode* pos);

//����/
void DLDistroy(DLNode* phead);

//��ӡ
void DLPrint(DLNode* phead);
