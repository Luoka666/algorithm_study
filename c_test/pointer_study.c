#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a  = 10;
    int* p = &a;//定义一个指向int型数据的指针变量p,(int*)为一个单独的数据类型
    printf("%d\n", a);
    printf("%d\n", *p);//*p为内容,通过地址间接访问数据，打印出内容
    printf("%p\n", p);//p为地址（a的首地址）
    printf("%p\n", &a);
    printf("%llu\n",sizeof(p));
    // int c[] = {1,2,3,4,5};
    int *c = (int*)malloc(sizeof(int) * 5);
    for (int i = 0;i < 5;i++) {
        printf("%d\n", *(c + i));
    }
    printf("%p\n", c);//输出*c的地址,数组首地址
    free(c); // 释放 malloc 申请的内存，避免内存泄露报错
    c = NULL; // 好习惯：释放后置空，避免野指针
    return 0;
}
