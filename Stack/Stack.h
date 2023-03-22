#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define STDEFAULTSIZE 4

typedef int STDataType;

typedef struct Stack
{
	STDataType* data;
	int top;
	int capacity;
}Stack;

//初始化
void StackInit(Stack* st);

//入栈
void StackPush(Stack* st, STDataType val);

//出栈
void StackPop(Stack* st);

//栈顶元素
STDataType TopOfStack(Stack* st);

//判空
bool isEmpty(Stack* st);

//判满
bool isFull(Stack* st);

//销毁
void StackDistroy(Stack* st);

//打印
void StackPrint(Stack* st);
