#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;

typedef struct SLlist
{
	datatype data;
	struct SLlist* next;
}SLl;

//�����½ڵ�
//SLl* CreateNode(datatype num);

//��ӡ
//void Print(SLl* plist);

//β��
void SLlPushBack(SLl** pphead, datatype num);

//βɾ
void SLlPopBack(SLl** pphead);

//ͷ��
void SLlPushFront(SLl** pphead, datatype num);

//ͷɾ
void SLlPopFront(SLl** pphead);

//����
SLl* SLlFind(SLl* plist, datatype num);

//��pos�����
void SLlInsertAfter(SLl* pos, datatype num);

//ɾ��pos��
void SLlEraseAfter(SLl* pos);

//��posǰ����
void SLlInsertFront(SLl** pphead, SLl* pos, datatype num);

//ɾ��posλ��
void SLlErasePos(SLl** pphead, SLl* pos);

struct ListNode* CreateNode(int num);

void Print(struct ListNode* plist);
