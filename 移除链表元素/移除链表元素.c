#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* prev, * cur;
    prev = NULL;
    cur = head;
    while (cur) {
        if (cur->val == val) {
            struct ListNode* next = cur->next;
            free(cur);
            if (cur == head) {
                head = next;
                cur = next;
            }
            else {
                //ÊÍ·Å
                prev->next = next;
                cur = next;
            }
        }
        else {
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}