//Finding transpose of a square matrix
#include <stdio.h>
int main(){
    // Getting input of square matrix from user
    int row,column;
    scanf("%d",&row);
    scanf("%d",&column);
    int matrix[row][column];
    int i,j;
    int t=1;
    // Creating the matrix by taking values as input from user
    for (i=0; i<row; i++){
        for (j=0; j<column ; j++){
            int number;
            scanf("%d",&number);
            matrix[i][j]=number;
            printf("digits added = %d\n",t);
            t=t+1;
        }
    }
    //transpose a matrix
    int k,l;
    for (k=0; k<row; k++){
        for (l=k; l<column; l++){
            int x;
            x=matrix[k][l];
            matrix[k][l]=matrix[l][k];
            matrix[l][k]=x;
        }
    }
    // printing matrix's transpose
    printf("Matrix transpose is\n");
    int m,n;
    for (m=0 ; m<row ; m++){
        for (n=0; n<column; n++){
            printf("%d  ",matrix[m][n]);
        }
        printf("\n");
    }
    return 0;
}
