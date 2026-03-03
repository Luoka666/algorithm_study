#include <stdio.h>
#define MAX(a, b) ((a) < (b) ? (a) : (b))
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int nums1_i = 0;
    int nums2_i = 0;
    int i = 0;
    int nums[] = {0};
    while (nums1[nums1_i] == '\0' && nums2[nums2_i] == '\0') {
        nums[i] = MAX(nums1[nums1_i], nums2[nums2_i]);
        nums1_i++;
        nums2_i++;
    }




}
int main(void) {

    return 0;
}
