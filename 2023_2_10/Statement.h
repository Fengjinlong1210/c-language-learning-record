#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define DEFAULT_CAPACITY 4

//建立栈
typedef int DataType;

typedef struct Stack
{
	int top;
	int capacity;
	DataType* data;
}Stack;

//初始化
void InitStack(Stack* pst);

//压栈
void StackPush(Stack* pst, DataType val);

//出栈
void StackPop(Stack* pst);

//打印
void PrintStack(Stack* pst);

//获取栈顶元素
void PrintTop(Stack* pst);

//检测有效个数
int StackSize(Stack* pst);

//检测是否为空
bool StackEmpty(Stack* pst);

///销毁
void StackDistroy(Stack* pst);

DataType StackTop(Stack* pst);
