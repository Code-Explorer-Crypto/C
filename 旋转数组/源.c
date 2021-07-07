//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void rotate(int* nums, int numsSize, int k) {
    int* nums1 = (int*)malloc(numsSize * sizeof(int));
    int z = 0;
    for (int i = 0;i < numsSize;i++) {
        if (i + k > numsSize - 1) {
            z = i + k - numsSize;
            nums1[z] = nums[i];
        }
        else if (i + k <= numsSize - 1) {
            z = i + k;
            nums1[z] = nums[i];
        }
   }
    for (int j = 0;j < numsSize;j++) {
        printf("%d\n", nums1[j]);
    }
}

  int main() {
      int numsSize;
      scanf("%d", &numsSize);
      int k;
      scanf("%d", &k);
      int* nums = (int*)malloc(numsSize * sizeof(int));
      for (int i = 1;i <= numsSize;i++) {
          printf("要输入的数为:");
          scanf("%d", &nums[i]);
      }
      rotate(nums, numsSize, k);    
      return 0;
 }