#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//typedef int datatype;
//
//typedef struct SLlist
//{
//	datatype data;
//	struct SLlist* next;
//}SLL;
//
////����һ���ڵ�
//SLL* CreateNode(datatype num);
//
////��������
//SLL* CreateSLlist(int size);
//
////��ӡ
//void Print(SLL* list);
//
////
//void SLLPushBack(SLL** plist, datatype num);

typedef int datatype;

typedef struct SLlist
{
	datatype data;
	struct SLlist* next;
}SLl;

//Create
SLl* CreateNode(datatype num);

//Print
void Print(SLl* list);

//PushBack
void SLlPushBack(SLl** pphead, datatype num);

//PopBack
void SLlPopBack(SLl** pphead);

//PushFront
void SLlPushFront(SLl** pphead, datatype num);

//PopFront
void SLlPopFront(SLl** pphead);