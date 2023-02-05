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
////创建一个节点
//SLL* CreateNode(datatype num);
//
////创建链表
//SLL* CreateSLlist(int size);
//
////打印
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