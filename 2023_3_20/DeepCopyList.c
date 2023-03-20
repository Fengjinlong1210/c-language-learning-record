#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//---------------138. leetcode 复制代随机指针的链表


struct Node
{
    int val;
    struct Node* next;
    struct Node* random;

};

struct Node* copyRandomList(struct Node* head)
{
    //第一步：构建一个新链表并链接到原表的每个结点后面
    struct Node* cur = head;

    while (cur)
    {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = cur->next;
        newnode->val = cur->val;
        cur->next = newnode;

        cur = cur->next->next;
    }

    //第二步：按原链表的随即指针给新链表的随机指针赋值
    cur = head;
    while (cur)
    {
        struct Node* newnode = cur->next;
        if (!cur->random)
        {
            newnode->random = NULL;
        }
        else
        {
            newnode->random = cur->random->next;
        }
        cur = newnode->next;
    }

    //第三步：取消链接，得到新链表
    cur = head;
    struct Node* newhead = NULL;
    struct Node* newtail = NULL;


    while (cur)
    {
        struct Node* newnode = cur->next;
        if (newhead == NULL)
        {
            newhead = newtail = cur->next;
        }
        cur->next = newnode->next;
        if (cur->next != NULL)
        {
            newtail->next = cur->next->next;
            newtail = newtail->next;
        }
        cur = cur->next;
    }
    return newhead;
}