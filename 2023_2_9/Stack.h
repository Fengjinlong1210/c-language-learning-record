#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define DEFAULT_CAPACITY 4

typedef int DataType;

typedef struct Stack
{
	DataType* data;
	int top;
	int capacity;
}Stack;

//栈：先进后出，尾插尾删

//初始化
void StackInit(Stack* pst);

//压栈
void StackPush(Stack* pst, DataType val);

//检查扩容
void CheckCapacity(pst);

//出栈
void StackPop(Stack* pst);

//获取栈顶数据
DataType StackTopData(Stack* pst);

//获取元素个数
int StackNumber(Stack* pst);

//检测栈是否为空
bool StackEmpty(Stack* pst);

//销毁
void StackDistroy(Stack* pst);