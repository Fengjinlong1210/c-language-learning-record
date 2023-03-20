#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

typedef struct ListNode
{
    int val;
    struct ListNode* next;
}ListNode;

//------------142. leetcode �һ���������뻷��
struct ListNode* detectCycle(struct ListNode* head)
{
    //����ָ��
    struct ListNode* fast = head;
    struct ListNode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            struct ListNode* mark = head;
            while (mark != slow)
            {
                mark = mark->next;
                slow = slow->next;
            }
            return mark;
        }
    }
    return NULL;
}

//------------------141. leetcode �ж��������Ƿ��л�

bool* CircularList(ListNode* head)
{
    ListNode* fast = head;
    ListNode* slow = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}


