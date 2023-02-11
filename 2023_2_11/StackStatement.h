#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define DEFAULTSIZE 4

typedef int STDataType;

typedef struct Stack
{
	STDataType* data;
	int top;
	int capacity;
}Stack;

//初始化
void InitStack(Stack* ps);

//入栈
void StackPush(Stack* ps, STDataType val);
void CheckCapacity(Stack* ps);

//出栈
void StackPop(Stack* ps);

//获取栈顶
STDataType StackTop(Stack* ps);

//获取元素个数
int StackSize(Stack* ps);

//检测是否为空
bool StackEmpty(Stack* ps);

//销毁栈
void StackDestroy(Stack* ps);