#include "Helper.h"

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *pDummyHead = new ListNode(0);
    ListNode *pCur = pDummyHead;
    int carry = 0;

    while (l1 != NULL || l2 != NULL)
    {
        int x = l1 != NULL ? l1->val : 0;
        int y = l2 != NULL ? l2->val : 0;
        int val = x + y + carry;

        carry = val / 10;

        pCur->next = new ListNode(val % 10);
        pCur = pCur->next;

        l1 != NULL ? l1 = l1->next : NULL;
        l2 != NULL ? l2 = l2->next : NULL;
    }

    if (carry != 0)
    {
        pCur->next = new ListNode(1);
    }

    pCur = pDummyHead->next;
    delete pDummyHead;

    return pCur;
}