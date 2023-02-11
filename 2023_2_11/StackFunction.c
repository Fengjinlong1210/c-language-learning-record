#define _CRT_SECURE_NO_WARNINGS 1
#include "StackStatement.h"

void InitStack(Stack* ps)
{
	assert(ps);
	STDataType* tmp = (STDataType*)malloc(sizeof(STDataType) * DEFAULTSIZE);
	if (!tmp)
	{
		perror("InitStack malloc");
		exit(-1);
	}
	else
	{
		ps->data = tmp;
		ps->top = 0;
		ps->capacity = DEFAULTSIZE;
	}
}

void CheckCapacity(Stack* ps)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->data, sizeof(STDataType) * (ps->capacity + DEFAULTSIZE));
		if (!tmp)
		{
			perror("realloc");
			exit(-1);
		}
		else
		{
			ps->data = tmp;
			ps->capacity += 4;
		}
	}
}

void StackPush(Stack* ps, STDataType val)
{
	assert(ps);
	CheckCapacity(ps);
	ps->data[ps->top] = val;
	ps->top++;
}

void StackPop(Stack* ps)
{
	assert(ps);
	assert(ps->top != 0);
	ps->top--;
}

STDataType StackTop(Stack* ps)
{
	assert(ps);
	assert(ps->top != 0);
	return ps->data[ps->top - 1];
}

int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}

bool StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

void StackDestroy(Stack* ps)
{
	assert(ps);
	STDataType* tmp = ps->data;
	ps->data = NULL;
	ps->capacity = 0;
	ps->top = 0;
	free(tmp);
}