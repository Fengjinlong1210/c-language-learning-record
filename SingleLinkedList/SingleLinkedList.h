#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int SLDataType;

typedef struct SLNode
{
	int val;
	struct SLNode* next;
}SLNode;

//�����½��
SLNode* BuyNode(SLDataType);

//β��
void SLPushBack(SLNode** pphead, SLDataType val);

//βɾ
void SLPopBack(SLNode** ppehad);

//ͷ��
void SLPushFront(SLNode** pphead, SLDataType val);

//ͷɾ
void SLPopFront(SLNode** pphead);

//����
SLNode* SLFind(SLNode** pphead, SLDataType val);

//ɾ��pos���
void SLDeletePos(SLNode** pphead, SLNode* pos);

//pos����
void SLInsertPos(SLNode** pphead, SLNode* pos, SLDataType val);

//����
void SLDistroy(SLNode** pphead);

//��ӡ
void SLPrint(SLNode** pphead);

