//Function to print the reverse of an integer
#include <stdio.h>
//Function Prototype
int ReverseNum(int num);
int main(){
    int number,x;
    //Getting Value from user
    scanf("%d",&number);
    x=ReverseNum(number);
    //Printing reversed value from the function
    printf("%d",x);
}
int ReverseNum(int num){
    int i,k=0,b=num;
    for (i=0; b>0; i++){
        k=(k*10)+(b%10);
        b=(b-(b%10))/10;
    }
    return k;
}
