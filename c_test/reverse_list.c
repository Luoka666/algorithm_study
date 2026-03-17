#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {

    struct ListNode* prev = NULL;
    struct ListNode* p = head;
    struct ListNode* next = NULL;

    while (p != NULL) {

        next = p->next;
        p->next = prev;
        prev = p;
        p = next;

    }

    return prev;

}
int main(void){

    return 0;

}