#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int expand_S(char* s,int l,int r) {

    int len = strlen(s);

    while (l >= 0 && r < len && s[l] == s[r]) {
        l--;
        r++;
    }

    return r - l - 1;

}

char* longestPalindrome(char* s) {

    int max_len = 1;
    int start = 0;
    int len = strlen(s);

    for (int i = 0;i < len;i++) {

        int len1 = expand_S(s,i,i);
        int len2 = expand_S(s,i,i + 1);

        int now_max_len = MAX(len1, len2);

        if (now_max_len > max_len) {
            start = i - (now_max_len - 1) / 2;
            max_len = now_max_len;
        }

    }

    char* c = (char*)malloc(sizeof(char) * (max_len + 1));

    memcpy(c,s + start,max_len);
    c[max_len] = '\0';

    return c;

}

int main(void) {

    char s[] = "aacbd";

    char* c = longestPalindrome(s);
    printf("%s\n",c);
    free(c);

    return 0;

}
