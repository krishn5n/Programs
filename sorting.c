//Sorting array given by the user
#include <stdio.h>
int main(){
    // Length of array from user
    int n;
    scanf("%d",&n);
    int numbers[n];
    int i;
    printf("Length of array added\n");
    // Adding digit to the array
    for (i=0; i<n; i++){
        int digit;
        scanf("%d",&digit);
        printf("Added digit = %d\n",i+1);
        numbers[i]=digit;
    }
    //sorting the array by printing the values from largest to smallest
    printf("Added successfully\n");
    int t=0;
    while (t<=n){
        //
        int l;
        int m;
        for (l=0; l<n; l++){
            int k=0;
            for (m=0; m<n; m++){
                if (numbers[l]!=numbers[m]){
                    if (numbers[l]>numbers[m]){
                        k=k+1;
                    }
                }
            
            
            if (k==n-t-1){
                printf("%d\n",numbers[l]);
                t=t+1;
            }
            }
        }
    }
    return 0;
}
