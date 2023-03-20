#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//---------------138. leetcode ���ƴ����ָ�������


struct Node
{
    int val;
    struct Node* next;
    struct Node* random;

};

struct Node* copyRandomList(struct Node* head)
{
    //��һ��������һ�����������ӵ�ԭ���ÿ��������
    struct Node* cur = head;

    while (cur)
    {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = cur->next;
        newnode->val = cur->val;
        cur->next = newnode;

        cur = cur->next->next;
    }

    //�ڶ�������ԭ������漴ָ�������������ָ�븳ֵ
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

    //��������ȡ�����ӣ��õ�������
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