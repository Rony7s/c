/*  Md. Rony Ahmmed Shah
    problem 6
    check aligible voting age 18
*/
#include<stdio.h>
int main(){

    int a;
    printf("Enter The age of Person\n");
    scanf("%d", &a);
    if(a>=18){
        printf("This person aligible for voting\n");
    }else{
     printf("This person aligible for NOT voting\n");
    }
    return 0;
}
