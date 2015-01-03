#include "Helper.h"

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *pHead = new ListNode(0);
    ListNode *pCur = pHead;
    ListNode *pTemp = NULL;
    int carry = 0;

    while (l1 != NULL && l2 != NULL)
    {
        int val = l1->val + l2->val + carry;

        if (val >= 10)
        {
            val -= 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        pCur->next = new ListNode(val);
        pCur = pCur->next;
        l1 = l1->next;
        l2 = l2->next;
    }

    pTemp = l1 == NULL ? l2 : l1;

    while (pTemp != NULL)
    {
        int val = pTemp->val + carry;
        if (val >= 10)
        {
            val -= 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        pCur->next = new ListNode(val);
        pCur = pCur->next;
        pTemp = pTemp->next;
    }

    if (carry != 0)
    {
        pCur->next = new ListNode(1);
    }

    pCur = pHead->next;
    delete pHead;

    return pCur;
}