#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

#define DEFAULT_CAPACITY 4

//����ջ
typedef int DataType;

typedef struct Stack
{
	int top;
	int capacity;
	DataType* data;
}Stack;

//��ʼ��
void InitStack(Stack* pst);

//ѹջ
void StackPush(Stack* pst, DataType val);

//��ջ
void StackPop(Stack* pst);

//��ӡ
void PrintStack(Stack* pst);

//��ȡջ��Ԫ��
void PrintTop(Stack* pst);

//�����Ч����
int StackSize(Stack* pst);

//����Ƿ�Ϊ��
bool StackEmpty(Stack* pst);

///����
void StackDistroy(Stack* pst);

DataType StackTop(Stack* pst);
