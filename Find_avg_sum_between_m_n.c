//Display sum and average from m to n
#include <stdio.h>
int sum_avg(int *ptr1,int *ptr2, float *ptr3, float *ptr4);
int main(){
    int m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    //Float so that the precise average can be calculated
    float sum=0;
    float average;
    if (m>n){
        sum_avg(&m,&n,&sum,&average);
    }
    else{
        sum_avg(&n,&m,&sum,&average);
    }
    printf("%f %f",sum,average);
    return 0;
}

//Function for average
int sum_avg(int *ptr1,int *ptr2, float *ptr3, float *ptr4){
    int i;
    for (i=*ptr2; i<=*ptr1; i++ ){
        *ptr3=*ptr3+i;
    }
    *ptr4=(*ptr3)/(*ptr1-*ptr2+1);
    return 0;
}
