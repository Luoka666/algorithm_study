#include <stdbool.h>
#include <stdio.h>
struct ListNode {

    int val;
    struct ListNode *next;

};

// bool hasCycle(struct ListNode *head) {
//
//     struct ListNode *slow = head;
//     struct ListNode *fast = head;
//
//     while (fast && fast->next) {//不为NULL
//
//         slow = slow->next;
//         fast = fast->next->next;
//
//         if (slow == fast) {
//
//             return true;
//
//         }
//
//     }
//
//     return false;
//
// }
bool hasCycle(struct ListNode *head) {

    struct ListNode *p = head;
    int counter = 0;
    while (p != NULL) {

        counter++;
        p = p->next;

        if (counter > 10000) {

            return true;

        }

        return false;

    }

}
// struct ListNode *detectCycle(struct ListNode *head) {
//     struct ListNode *slow = head;
//     struct ListNode *fast = head;
//
//     while (fast && fast->next) {
//
//         slow = slow->next;
//         fast = fast->next->next;
//
//         if (slow == fast) {
//
//
//
//         }
//
//
//
//     }
//
//     return NULL;
//
// }