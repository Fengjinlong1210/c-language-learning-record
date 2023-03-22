#define _CRT_SECURE_NO_WARNINGS 1
#include "Stack.h"

Stack st;

int main()
{
	StackInit(&st);
	StackPush(&st, 1);
	StackPush(&st, 2);
	StackPush(&st, 3);
	StackPush(&st, 4);
	StackPush(&st, 5);
	StackPush(&st, 6);
	StackPush(&st, 7);
	StackPush(&st, 8);
	//StackPop(&st);
	STDataType ret = TopOfStack(&st);
	printf("Top of Stack is %d\n", ret);
	int ret1 = isEmpty(&st);
	int ret2 = isFull(&st);
	StackPrint(&st);
	StackDistroy(&st);

	return 0;
}