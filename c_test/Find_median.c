#include <stdio.h>
#include <stdlib.h>
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int i = 0;
    int k = 0;
    int j = 0;
    int *s = (int*)malloc(sizeof(int) * (nums1Size + nums2Size));
    //谁小放谁
    while(i < nums1Size && j < nums2Size){
        if(nums1[i] <= nums2[j]){
            s[k++] = nums1[i++];
        }else{
            s[k++] = nums2[j++];
        }
    }
    //放剩余的数
    while (i < nums1Size){

        s[k++] = nums1[i++];

    };
    while (j < nums2Size){

        s[k++] = nums2[j++];

    };
    int x = (nums1Size + nums2Size) / 2;

    if((nums1Size+nums2Size) % 2 != 0){
        double sum1 = s[x];
        free(s);
        return sum1;

    }else{
        double sum2 = (((double)s[x] + (double)s[x - 1]) / 2.0);
        free(s);
        return sum2;
    }

}




int main(void) {
    int nums1[4] = {1,3,6,9};
    int nums2[5] = {2,4,5,7,8};
    printf("中位数为：%f\n",findMedianSortedArrays(nums1,4,nums2,5));
    return 0;
}
