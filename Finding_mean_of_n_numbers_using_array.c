//Finding mean of n numbers using array
#include <stdio.h>
//Function using pointers for finding mean of array
float mean(float *ptr, int size);//Function prototype
int main(){
    int n;
    scanf("%d",&n);
    float matrix[n];
    int i;
    //Adding elements to Matrix
    for (i=0; i<n; i++){
        float number;
        scanf("%f",&number);
        matrix[i]=number;
    }
    float ans=mean(matrix,n);
    //Printing the answer which was returned by the function
    printf("%f",ans);
    return 0;
}
//Function
float mean(float *ptr, int size){
    float sum=0;
    int i;
    for (i=0; i<size; i++){
        sum=sum+*(ptr+i);
    }
    return (sum/size);
}
