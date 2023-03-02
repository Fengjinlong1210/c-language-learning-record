#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int SLDataType;

typedef struct SingleListNode
{
	SLDataType val;
	struct SingleListNode* next;
}SLNode;

//��ͷ�������ʼ��ͷ���
SLNode* SLInitHead();

//�½����
SLNode* SLBuyNode(SLDataType val);

//�������ͷ��
void SLPushHead(SLNode* phead, SLDataType val);

//β��
void SLPushBack(SLNode* phead, SLDataType val);

//ͷɾ
void SLPopHead(SLNode* phead);

//βɾ
void SLPopBack(SLNode* phead);

//����
SLNode* SLFindNode(SLNode* phead, SLDataType val);

//pos����
void SLInsertBack(SLNode* phead, SLNode* pos, SLDataType val);

//posɾ��
void SLDelete(SLNode* phead, SLNode* pos);

//����
void SLDistroy(SLNode* phead);

//��ӡ
void SLPrint(SLNode* phead);
