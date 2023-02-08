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

//创建结点
ListNode* CreateNode(DataType val);

//
void PrintList(ListNode* phead);
void PrintNode(ListNode* node);

//初始化
ListNode* InitNode();

//查找
ListNode* FindNode(ListNode* phead, DataType val);

//pos前插入
void InsertNode(ListNode* pos, DataType val);

//删除pos
void EraseNode(ListNode* pos);

//尾插
void PushBack(ListNode* phead, DataType val);

//尾删
void PopBack(ListNode* phead);

//头插
void PushFront(ListNode* phead, DataType val);

//头删
void PopFront(ListNode* phead);

void ListDistroy(ListNode* phead);