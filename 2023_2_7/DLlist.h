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

//初始化
ListNode* DLLInit();

//打印
void Print(ListNode* phead);
void PrintNode(ListNode* node);

//创建结点
ListNode* CreateNode(DataType val);

//头插
void DLLPushFront(ListNode* phead, DataType val);

//头删
void DLLPopFront(ListNode* phead);

//尾插
void DLLPushBack(ListNode* phead, DataType val);

//尾删
void DLLPopBack(ListNode* phead);

//查找
ListNode* DLLFind(ListNode* phead, DataType val);

//在pos前插入结点
void DLLInsertNode(ListNode* pos, DataType val);

//删除pos位置的结点
void DLLDeleteNode(ListNode* pos);