#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

Stack ST;

int main()
{
	StackInit(&ST);
	StackPush(&ST, 1);
	StackPush(&ST, 2);
	StackPush(&ST, 3);
	StackPush(&ST, 4);
	StackPush(&ST, 5);
	StackPop(&ST);
	//StackPop(&ST);
	DataType ret = StackTopData(&ST);
	printf("%d ", ret);

	return 0;
}