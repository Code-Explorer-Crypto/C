//����һ�������ͷ�ڵ� head ��һ���ض�ֵ x �������������зָ���ʹ������ С�� x �Ľڵ㶼������ ���ڻ���� x �Ľڵ�֮ǰ��
//
//��Ӧ�� ���� ����������ÿ���ڵ�ĳ�ʼ���λ�á�

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