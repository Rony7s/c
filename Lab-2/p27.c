/*  Md. Rony Ahmmed Shah
    problem 7
    check positive negative and zero
*/
#include<stdio.h>
int main(){

    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    if(num>0){
        printf("This number is Positive\n");
    }else if(num<0){
        printf("This number is Negative\n");
    }else{
        printf("This number is Zero\n");
    }
    return 0;
}
