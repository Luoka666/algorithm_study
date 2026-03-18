#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct ListNode {
      int val;
      struct ListNode *next;
};

bool isPalindrome(struct ListNode* head) {

      struct ListNode *p = head;
      int size = 0;

      while (p != NULL) {

            size++;

            p = p->next;

      }

      int *c = (int*)malloc(sizeof(int) * size);

      p = head;

      //入栈
      int i = 0;
      while (p != NULL) {

            c[i++] = p->val;

            p = p->next;

      }

      p = head;
      //出栈
      while (p != NULL) {

            if (c[(i--) - 1] != p->val) {

                  return false;

            }
            p = p->next;

      }

      free(p);
      free(c);
      return true;

}