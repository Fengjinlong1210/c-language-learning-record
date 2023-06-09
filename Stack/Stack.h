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

//��ʼ��
void StackInit(Stack* st);

//��ջ
void StackPush(Stack* st, STDataType val);

//��ջ
void StackPop(Stack* st);

//ջ��Ԫ��
STDataType TopOfStack(Stack* st);

//�п�
bool isEmpty(Stack* st);

//����
bool isFull(Stack* st);

//����
void StackDistroy(Stack* st);

//��ӡ
void StackPrint(Stack* st);
