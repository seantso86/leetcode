#include <stdio.h>
#include <stdlib.h>

int* twoSum(int*, int, int);

int main() {
    int nums[4] = {2,7,11,15};
    int target = 9;
    int* result = twoSum(nums, 4, target);
    printf("[%d, %d]\n", result[0], result[1]);
    free(result);
    return 0;
}

int* twoSum(int* nums, int numsSize, int target) {
    int* result = (int*)malloc(sizeof(int)*2);
    for (int i=0; i < numsSize-1; i++) {
        for (int j=i+1; j<numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
            }
        }
    }
    return result;
}