//Reading , Printing an array and also finding the smallest element in the arry
#include <stdio.h>
//Function prototypes for the 3 operations:- Reading , Printing , Finding smallest
int read_array(int n, int *ptr1);
int print_array(int n, int *ptr2);
int find_small(int n,int *ptr3);

int main(){
    int n;
    printf("Enter the number of elements :");
    //Getting number of elements
    scanf("%d",&n);
    printf("\n");
    int matrix[n];
    printf("Elements Addtion :-\n");
    read_array(n,matrix);
    printf("Elements in the Matrix:-\n");
    print_array(n,matrix);
    printf("For smallest element in a matrix :-\n");
    int small=find_small(n,matrix);
    printf("%d",small);
    return 0;
}

int read_array(int n, int *ptr1){
    int i;
    for(i=0; i<n; i++){
        //Adding element in Matrix
        int number;
        printf("Enter the value to be added :");
        scanf("%d",&number);
        printf("\n");
        *(ptr1+i)=number;
    }
    return 0;
}

int print_array(int n, int *ptr2){
    int i;
    //Printing elements in matrix
    for (i=0; i<n; i++){
        printf("%d\n",*(ptr2+i));
    }
    return 0;
}

int find_small(int n,int *ptr3){
    int smallest=100000;
    int i;
    //Finding smallest in a matrix
    for (i=0; i<n; i++){
        if (smallest > *(ptr3+i)){
            smallest=*(ptr3+i);
        }
        else{
            continue;
        }
    }
    return smallest;
}
