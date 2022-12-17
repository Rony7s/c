// number of problem 02
// Rony Ahmmed 2002035

#include<stdio.h>

int main(){
    int n;
    printf("Enter a five digit integer number\n");
    scanf("%d", &n);
    int a, b, c, d, e, x;

    a = n/10000;
    b = n/1000 - a*10;
    c = n/100 - a*100-b*10;
    d = n/10 - a*1000-b*100-c*10;
    e = n - a*10000-b*1000-c*100-d*10;

    x = e*10000+d*1000+c*100+b*10+a;

   // printf("%d\n%d\n%d\n%d\n%d", a, b, c, d, e);

    printf("%d reversed is %d\n",n, x);

    if(n==x){
        printf("Reversed is Equal\n");
    }else{
        printf("Reversed is Not Equal\n");
    }



    return 0;
}
