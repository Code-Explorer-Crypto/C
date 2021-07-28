//给你一个链表的头节点 head 和一个特定值 x ，请你对链表进行分隔，使得所有 小于 x 的节点都出现在 大于或等于 x 的节点之前。
//
//你应当 保留 两个分区中每个节点的初始相对位置。

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* partition(struct ListNode* head, int x) {
    struct ListNode* lessHead, * lessTail, * biggerHead, * biggerTail, * cur;
    cur = head;
    lessHead = biggerHead = lessTail = biggerTail = NULL;
    while (cur) {
        if (cur->val < x) {
            if (lessTail == NULL) {
                lessHead = cur;
                lessTail = cur;
            }
            else {
                lessTail->next = cur;
                lessTail = lessTail->next;
            }
            cur = cur->next;
        }
        else {
            if (biggerTail == NULL) {
                biggerHead = cur;
                biggerTail = cur;
            }
            else {
                biggerTail->next = cur;
                biggerTail = biggerTail->next;
            }
            cur = cur->next;
        }
    }
    // if(lessTail == NULL){
    //     if(biggerHead){
    //         biggerTail->next = NULL;
    //   return biggerHead;
    //     }
    // }
    // if(biggerTail == NULL){
    //     if(lessTail){
    //         lessTail->next = NULL;
    //         return lessHead;
    //     }
    // }
    if (biggerTail)
        biggerTail->next = NULL;
    if (lessHead == NULL)
        return biggerHead;
    if (biggerHead == NULL) {
        if (lessTail)
            lessTail->next = NULL;
        return lessHead;
    }
    lessTail->next = biggerHead;
    return lessHead;
}