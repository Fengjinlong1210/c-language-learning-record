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

//��ʼ��
void InitStack(Stack* ps);

//��ջ
void StackPush(Stack* ps, STDataType val);
void CheckCapacity(Stack* ps);

//��ջ
void StackPop(Stack* ps);

//��ȡջ��
STDataType StackTop(Stack* ps);

//��ȡԪ�ظ���
int StackSize(Stack* ps);

//����Ƿ�Ϊ��
bool StackEmpty(Stack* ps);

//����ջ
void StackDestroy(Stack* ps);