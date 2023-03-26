//Finding product of N float numbers
#include <stdio.h>
//Defining Functions
int multiplication(int n);
int main(){
    int n;
    float ans;
    scanf("%d",&n);
    //Calling function
    ans=multiplication(n);
    printf("%f",ans);
    return 0;
}
int multiplication(int n){
    float number;
    if (n>0){
        scanf("%f",&number);
        //Recursive function to call the same function
        return number*multiplication(n-1);
    }
    else{
        return 1;
    }
    
}
