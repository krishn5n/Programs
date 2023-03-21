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
    //creating a transpose matrix
    int transpose[column][row];
    //Adding elements to the transpose
    int l,m;
    for (l=0; l<row; l++){
        for (m=0; m<column ; m++){
            transpose[m][l]=matrix[l][m];
        }
    }
    // Printing Tranpose matrix
    printf("Matrix transpose is\n");
    int f,n;
    for (f=0 ; f<column ; f++){
        for (n=0; n<row; n++){
            printf("%d  ",transpose[f][n]);
        }
        printf("\n");
    }
    return 0;
}

//row,column,matrix,i,j,t,number,transpose l,m,f,n
