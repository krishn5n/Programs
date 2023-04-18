/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
int* getConcatenation(int* nums, int numsSize, int* returnSize){
    int* ans = malloc(sizeof(int)*numsSize*2);
    for (int i=0; i<numsSize; i++){
        ans[i]=*(nums+i);
    }
    for (int j=0; j<numsSize; j++){
        ans[j+numsSize]=*(nums+j);
    }
    *returnSize=2*numsSize;
    return ans;
}
