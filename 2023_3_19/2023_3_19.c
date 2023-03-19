/**
	
	get interection node

 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
   //对齐两个链表
   struct ListNode* curA = headA;
   struct ListNode* curB = headB;
   int lenthA = 0;
   int lenthB = 0;
   while(curA)
   {
       lenthA++;
       curA = curA->next;
   } 
   while(curB)
   {
        lenthB++;
        curB = curB->next;
   }
    struct ListNode* longhead = headA;
    struct ListNode* shorthead = headB;

    int gap = abs(lenthB - lenthA);
    if(lenthA < lenthB)
    {
        longhead = headB;
        shorthead = headA;
    }

    while(gap--)
    {
        longhead = longhead->next;
    }
    while(longhead != shorthead)
    {
        longhead = longhead->next;
        shorthead = shorthead->next;
    }
    return shorthead;
    
}
