#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

void StackInit(Stack* st)
{
	st->top = 0;
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * STDEFAULTSIZE);
	if (!tmp)
	{
		perror("malloc");
		return;
	}
	st->data = tmp;
	st->capacity = STDEFAULTSIZE;
}

void STCheckCapacity(Stack* st)
{
	if (st->capacity != st->top)
	{
		return;
	}
	STDataType* tmp = (STDataType*)realloc(st->data, sizeof(STDataType) * (st->capacity * 2));
	if (!tmp)
	{
		perror("realloc");
		return;
	}
	st->data = tmp;
	st->capacity *= 2;
}

void StackPush(Stack* st, STDataType val)
{
	assert(st);
	STCheckCapacity(st);
	st->data[st->top] = val;
	st->top++;
}

void StackPop(Stack* st)
{
	assert(st);
	//еп©у
	if(isEmpty(st))
	{
		return;
	}
	st->top--;
}

bool isEmpty(Stack* st)
{
	assert(st);
	return st->top == 0;
}

bool isFull(Stack* st)
{
	assert(st);
	return (st->capacity == st->top);
}

void StackDistroy(Stack* st)
{
	assert(st);
	st->top = st->capacity = 0;
	free(st->data);
	st->data = NULL;
}

void StackPrint(Stack* st)
{
	assert(st);
	if (isEmpty(st))
	{
		return;
	}
	int i = 0;
	for (i = 0; i < st->top; i++)
	{
		printf("%d ", st->data[i]);
	}
	printf("\n");
}

STDataType TopOfStack(Stack* st)
{
	assert(st);
	return st->data[st->top - 1];
}
