#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int datatype;

typedef struct slist
{
	datatype val;
	struct slist* next;
}slist;

void Initlist(slist** pphead);


//�����ڵ�
slist* CreateNode(datatype value);

//����
slist* Find(slist* pl, datatype value);

//��ӡ
void Print(slist* pl);

//β��
void PushBack(slist** pphead, datatype value);

//βɾ
void PopBack(slist** pphead);

//ͷ��
void PushFront(slist** pphead, datatype value);

//ͷɾ
void PopFront(slist** pphead);

//��pos�����
void InsertBack(slist** pphead, slist* pos, datatype value);
