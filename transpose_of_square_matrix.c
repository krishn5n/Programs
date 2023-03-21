//Find rightmost non zero integer of a factorial
#include <stdio.h>
int main(){
    //Get number for which to calculate factorial
    int n;
    scanf("%d",&n);
    int i;
    int fact=1;
    //finding facftorial
    for(i=1; i<=n; i++){
        fact=fact*i;
    }
    int t=1;
    //finding last most digit
    while (t==1){
        //checking if last most digit is 0 or not
        if (fact%10==0){
            fact=(fact/10);
        }
        else{
            printf("The rightmost non zero integer of factorial of %d is %d",n,fact%10);
            t=t+1;
        }
    }
    return 0;
}
