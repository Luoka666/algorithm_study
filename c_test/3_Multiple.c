// Created by 32663 on 2026/2/9.
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a,b,c = 0;
    scanf("%d %d %d", &a, &b,&c);
    if ((a + b) % 3 == 0 || (a + c) % 3 == 0 || (b + c) % 3 == 0) {
        printf("yes\n");
    }else {
        printf("no\n");
    }
    return 0;
}

