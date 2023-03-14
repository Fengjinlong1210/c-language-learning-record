#include "Stack.h"
void InitStack(stack *pst)
{
    assert(pst);
    pst->size = 0;
    STDataType *tmp = (STDataType *)malloc(sizeof(STDataType) * DEFAULTSIZE);
    if (!tmp)
    {
        perror("malloc");
        return;
    }
    pst->data = tmp;
    pst->top = 0;
}

void CheckCapacity(stack *pst)
{
    assert(pst);
    if (pst->size == pst->top)
    {
        STDataType *tmp = (STDataType *)realloc(pst->data, pst->size + DEFAULTSIZE);
        if (!tmp)
        {
            perror("realloc");
            return;
        }
        // memcpy(tmp, pst->data, sizeof(STDataType) * pst->size);
        pst->size += DEFAULTSIZE;
        pst->data = tmp;
    }
    else
    {
        return;
    }
}

STDataType TopOfStack(stack *pst)
{
    assert(pst);
    if (StackEmpty(pst))
    {
        printf("Stack is Empty\n");
        return -1;
    }
    return pst->data[pst->top - 1];
}

void StackPush(stack *pst, STDataType val)
{
    assert(pst);
    CheckCapacity(pst);
    pst->data[pst->top] = val;
    pst->top++;
}

void StackPop(stack *pst)
{
    assert(pst);
    if (StackEmpty(pst))
    {
        printf("Stack is Empty\n");
        return;
    }
    pst->top--;
}

bool StackEmpty(stack *pst)
{
    assert(pst);
    return pst->top == 0;
}

void DistroyStack(stack *pst)
{
    STDataType *tmp = pst->data;
    free(tmp);
    pst->data = NULL;
    pst->size = pst->top = 0;
}
