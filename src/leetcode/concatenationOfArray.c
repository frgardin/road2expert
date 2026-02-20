#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* returnedArray = malloc(numsSize*2*sizeof(int));
    *returnSize = numsSize*2;
    for (int i =0;i<numsSize;i++) {
        returnedArray[i]=nums[i];
        returnedArray[i+numsSize]=nums[i];
    }
    return returnedArray;
}