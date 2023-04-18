/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize){
    double *ans=(double *)malloc(2*sizeof(double));
    ans[0]=273.15+celsius;
    ans[1]=(celsius*1.8)+32.00;
    *returnSize=2;
    return ans;
}
