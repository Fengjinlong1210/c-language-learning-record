#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

typedef int SLDataType;

typedef struct circularlist
{
	SLDataType val;
	struct circularlist* next;
}SLNode;

//��ͷ�������ʼ��ͷ���
SLNode* SLInitHead();

//�½����
SLNode* SLBuyNode(SLDataType val);

//β��
void SLPushBack(SLNode* phead, SLDataType val);

//posɾ��
void SLDelete(SLNode* phead, SLNode* pos);

//����
void SLDistroy(SLNode* phead);

//��ӡ
void SLPrint(SLNode* phead);

//����Ԫ�ظ���
int SLSize(SLNode* phead);