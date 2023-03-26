//Recursively printing from n till 0
#include <stdio.h>
void printing(int n);
int main(){
    //Getting N from user
    int n;
    scanf("%d",&n);
    printing(n);
    return 0;
}
//Function to print N recursively
void printing(int n){
    if (n!=0){
        printf("%d",n);
        printing(n-1);
    }
    else{
        printf("%d",0);
    }
}
