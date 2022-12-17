// number of problem 03
// Rony Ahmmed 2002035

#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the age of Ram , Shyam, Asay\n");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a>c){
         printf("Ram is youngest\n");
    }else if(b>a && b>c){
        printf("Shyam is youngest\n");
    }else{
        printf("Asay is youngest\n");
    }

    return 0;
}
