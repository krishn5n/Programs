#include <stdio.h>
int main(){
    //Getting inputs
    int row1,column1,column2;;
    printf("Enter rows 1\n");
    scanf("%d",&row1);
    printf("Enter column 1\n");
    scanf("%d",&column1);
    printf("Enter column 2\n");
    scanf("%d",&column2);
    int row2=column1;
    //creating matrix
    int matrix1[row1][column1];
    int matrix2[row2][column2];
    //Make the matrix
    printf("Addition of elements for first matrix\n");
    int i,j;
    for (i=0; i<row1; i++){
        for (j=0; j<column1; j++){
            int number;
            printf("Add element =");
            scanf("%d",&number);
            matrix1[i][j]=number;
        }
    }
    printf("Addition of elements for second Matrix\n");
    int k,l;
    for (k=0; k<row2; k++){
        for (l=0; l<column2; l++){
            int number;
            printf("Add Element =");
            scanf("%d",&number);
            matrix2[k][l]=number;
        }
    }
    int multimatrix[row1][column2];
    int m,n,o;
    for (m=0; m<row1; m++){
        for (n=0; n<column2; n++){
            int sum=0;
            for (o=0; o<column1; o++){
                sum=sum+(matrix1[m][o]*matrix2[o][n]);
            }
            multimatrix[m][n]=sum;
            printf("at %d,%d value is %d\n",m,n,sum);
        }
    }
    return 0;
}
