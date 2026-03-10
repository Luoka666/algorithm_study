#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
char* longestPalindrome(char* s) {

    int l1 = 1;
    int r1 = l1;
    int l2 = 0;
    int r2 = l2 + 1;
    int len1 = 0;
    int len2 = 0;
    int max_len1 = 0;
    int max_len2 = 0;
    int len = strlen(s);
    int max = 0;


    //找奇数串
    while (r1 <= len - 1 && s[l1] == s[r1]) {

        l1--;
        r1++;
        len1 = r1 - l1 + 1;
        if (len1 == 1) {
            continue;
        }
        max_len1 = MAX(len1, max_len1);

    }

    //找偶数串
    while (r2 <= len - 1 && s[l2] == s[r2]) {

        if (s[l2] == s[r2]) {

            l1--;
            r2++;
            max_len2 = MAX(len2, max_len2);

        }else {
            continue;
        }

    }
    max = MAX(max_len2,max_len1);
    if (max == max_len1) {
        int k = 0;
        char *c = (char*)malloc(sizeof(char) * (r1 - l1 + 1));
        for (l1;l1 <= r1;l1++) {
            c[k++] = s[l1];
        }
        return c;
    }else {
        int k = 0;
        char *c = (char*)malloc(sizeof(char) * (r1 - l1 + 1));
        for (l2;l2 <= r1;l2++) {
            c[k++] = s[l2];
        }
        return c;

    }


}

int main(void) {

    char s[7] = "babadda";
    longestPalindrome(s);




    return 0;
}
