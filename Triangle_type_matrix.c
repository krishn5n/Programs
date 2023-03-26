//Finding type of triangle of matrix
#include <stdio.h>
int main(){
    //Getting inputs
    int row,column;
    printf("Enter rows = ");
    scanf("%d",&row);
    column=row;
    //Creating matrix
    int matrix[row][column];
    //Making the matrix
    printf("Addition of elements for matrix\n");
    int k,l;
    for (k=0; k<row; k++){
        for (l=0; l<column; l++){
            int number;
            printf("Add element =");
            scanf("%d",&number);
            matrix[k][l]=number;
        }
    }
    //Finding type of triangle
    int uppertriangle=0,lowertriangle=0;
    int i,j;
    for (i=0; i<row; i++){
        for (j=0; j<column; j++){
            if (i>j){
                if (matrix[i][j]==0){
                    uppertriangle=uppertriangle+1;
                }
            }
            else{
                if (matrix[i][j]==0){
                    lowertriangle=lowertriangle+1;
                }
            }
        }
    }
    int sum=0;
    int m;
    for (m=1; m<row; m++){
        sum=sum+m;
    }
    if (sum==uppertriangle){
        printf("Matrix is an Upper triangle type matrix");
    }
    else{
        printf("Matrix is a Lower Triangle type matrix");
    }
    return 0;
}
