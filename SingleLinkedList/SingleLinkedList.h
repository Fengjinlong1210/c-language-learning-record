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

//创建新结点
SLNode* BuyNode(SLDataType);

//尾插
void SLPushBack(SLNode** pphead, SLDataType val);

//尾删
void SLPopBack(SLNode** ppehad);

//头插
void SLPushFront(SLNode** pphead, SLDataType val);

//头删
void SLPopFront(SLNode** pphead);

//查找
SLNode* SLFind(SLNode** pphead, SLDataType val);

//删除pos结点
void SLDeletePos(SLNode** pphead, SLNode* pos);

//pos插入
void SLInsertPos(SLNode** pphead, SLNode* pos, SLDataType val);

//销毁
void SLDistroy(SLNode** pphead);

//打印
void SLPrint(SLNode** pphead);

