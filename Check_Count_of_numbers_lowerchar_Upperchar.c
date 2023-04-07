//Checking number of Numbers,Upper Characters, Lower Characters
#include <stdio.h>
int check(char *ptr, int *ptr1, int *ptr2, int *ptr3);
int main(){
    int count_no=0,char_upper=0,char_lower=0;
    char array[50];
    //Getting string from user
    fgets(array,sizeof(array), stdin);
    check(array, &count_no, &char_upper, &char_lower);
    printf("Numbers=%d Upper Characters=%d Lower Characters=%d ",count_no,char_upper,char_lower);
    return 0;
}
//Function to Check the Count
int check(char *ptr, int *ptr1, int *ptr2, int *ptr3){
    int i;
    for (i=0; *(ptr+i)!='\0'; i++){

        if ((*(ptr+i)>='0') &&(*(ptr+i)<='9')){
            *ptr1=*ptr1+1;
        }
        else if ((*(ptr+i))>='a' && (*(ptr+i)<='z')){
            *ptr3=*ptr3+1;
        }
        else if ((*(ptr+i)>='A') && (*(ptr+i)<='Z')){
            *ptr2=*ptr2+1;
        }
        else{
            continue;
        }
    }
    return 0;
}
