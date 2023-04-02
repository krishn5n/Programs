//Power of numbers
#include <stdio.h>
float power(float x, int n);
int main(){
    //Creating Variables
    float x;
    printf("Enter value of x = ");
    scanf("%f",&x);
    int n;
    printf("Enter value of n = ");
    scanf("%d",&n);
    float y;
    //Finding if power is odd or even
    if (n>0){
        y=power(x,n);
        printf("%f",y);
    }
    else{
        n=n*-1;
        y=power(x,n);
        y=(1/y);
        printf("%f",y);
    }
    return 0;
}

//Function to find power
float power(float x, int n){
    if (n>0){
        return x*power(x,n-1);
    }
    else{
        return 1;
    }
}
