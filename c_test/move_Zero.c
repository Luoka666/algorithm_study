#include <stdio.h>

void moveZeroes(int* nums, int numsSize) {

    int stackSize = 0;//栈初始大小

    for (int i = 0;i < numsSize;i++) {
        //非0先入栈
        if (nums[i] != 0) {

            nums[stackSize++] = nums[i];


        }

    }
    // //判断是否还有剩余栈位
    // if (stackSize <= numsSize - 1) {
    //     //剩余栈位赋值0
    //     for (stackSize;stackSize <= numsSize - 1;stackSize++) {//继续循环条件nums[numsSize - 1]会导致出错，因为nums[numsSize - 1]可能为0（假）.则循环一次都不会执行，可以改为stackSize <= numsSize - 1
    //
    //         nums[stackSize] = 0;
    //
    //     }
    //
    // }
    //判断是否还有剩余栈位和剩余栈位赋值0，这两个代码块可以合并为如下代码。
    while (stackSize < numsSize) {

        nums[stackSize++] = 0;

    }

}
int main(void) {

    int n = 3;
    int nums[] = {0,1,0};

    moveZeroes(nums, n);

    for (int i = 0;i < 3;i++) {

        printf("%d\t",nums[i]);

    }

    return 0;

}