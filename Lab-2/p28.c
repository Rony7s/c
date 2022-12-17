/*  Md. Rony Ahmmed Shah
    problem 8
    check Leap year
*/
#include<stdio.h>
int main(){

    int year;
    printf("Enter a Year:\n");
    scanf("%d", &year);
    if( (year%4==0) && (year%100!=0) || (year%400==0) ){
        printf("This Year is Leap Year\n");
    }else{
        printf("This Year is NOT Leap Year\n");
    }
    return 0;
}
