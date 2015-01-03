#ifndef HELPER_H
#define HELPER_H
#include <stdio.h>
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
#endif