#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdbool.h>

typedef struct ListNode
{
    int val;
    struct ListNode* next;
}ListNode;

//------------142. leetcode 找环节链表的入环点
struct ListNode* detectCycle(struct ListNode* head)
{
    //快慢指针
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

//------------------141. leetcode 判断链表中是否有环

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


