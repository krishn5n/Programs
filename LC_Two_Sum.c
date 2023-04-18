/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int*results;

    results = (int*)malloc(sizeof(int) * 2);
    if (!results){
        return 0;
    }
    results[0] = 0;
    results[1] = 0;
    for (int k = 0; k<numsSize; k++) {
        for (int l = k + 1; l < numsSize; l++) {
            if (nums[k] + nums[l] == target) {
                *returnSize = 2;
                results[0] = k;
                results[1] = l;
                return results;
            }
        }
    }
    *returnSize = 0;
    return 0;
}
