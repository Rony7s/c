// number of problem 04
// Rony Ahmmed 2002035

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the Angle of a Triangle A, B, C\n");
    scanf("%d%d%d", &a, &b, &c);
    if(a+b+c==180){
        printf("The Triangle is Valid\n");
    }else{
        printf("The Triangle is Not Valid\n");
    }
    return 0;
}
