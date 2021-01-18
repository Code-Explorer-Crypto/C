//#include <stdio.h>
//int removeElement(int* nums, int numsSize, int val) {
//    //查找
//    void Select(int* nums, int numsSize, int val) {
//        for (int i = 0;i < numsSize;i++) {
//            if (nums(i) == val) {
//                return i;
//            }
//        }
//        if (i = numsSize - 1)
//            return 0;
//    }
//
//    //删除
//    void Delete(int* nums, int numsSize, int val) {
//        for (int i = 0;i < numsSize;i++) {
//            int j = Select(nums, numsSize, val);
//            if (j != 0) {
//                for (int k = j;i < numsSize - 1;i++) {
//                    nums(k) = nums(k + 1);
//                }
//                numsSize = numsSize - 1;
//            }
//        }
//    }
//
//    for (int i = 0;i < numsSize;i++) {
//        if (Select(nums, numsSize, val) != 0) {
//            Delete(nums, numsSize, val)
//        }
//    }
//    return numsSize;
//}

//已知数组nums,数组长度numsSize,要删除的数据val
//要求删除数据val,并返回新的长数组度
int removeElement(int* nums, int numsSize, int val) {

    // //整个数组遍历
    //  for(int i = 0;i < numsSize;i++){
    //     if(*(nums + i) == val){
    //        for(int j = i;i < numsSize - 1;i++){
    //          *(nums + j) = *(nums + j + 1);
    //        }
    //        numsSize--;
    //     }
    //  }
    //  return numsSize;
    int i = 0, idx = 0;
    for (;i < numsSize;i++) {
        if (nums[i] != val) {
            nums[idx++] = nums[i];
        }
    }
    return idx;
}