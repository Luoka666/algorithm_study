#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int max_Sum = 0;
int maxSubArray(int* nums, int numsSize) {
    for (int i = 0;i < numsSize;i++) {

        int sum = nums[i];
        int j = i + 1;

        while (j < numsSize) {

            sum = sum + nums[j++];
            max_Sum = MAX(sum,max_Sum);

        }


    }

    return max_Sum;
}
int main(void){

    int nums[] = {5,4,-1,7,8};
    maxSubArray(nums,sizeof(nums) / sizeof(nums[0]));
    printf("%d\n",maxSubArray(nums,sizeof(nums) / sizeof(nums[0])));

    return 0;

}