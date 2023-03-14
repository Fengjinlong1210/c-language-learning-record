#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <string.h>

#define DEFAULTSIZE 4

typedef int STDataType;

typedef struct stack
{
    int size;
    int top;//记录栈顶
    STDataType *data;
}stack;

//初始化栈
void InitStack(stack* pst);
void CheckCapacity(stack *pst);

//入栈
void StackPush(stack *pst, STDataType val);

//出栈
void StackPop(stack *pst);

//取出栈顶元素
STDataType TopOfStack(stack *pst);

//判断栈是否为空
bool StackEmpty(stack *pst);

//销毁栈
void DistroyStack(stack *pst);