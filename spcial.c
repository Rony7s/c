#include <stdio.h>
 
int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a){
        if(a*a==b*b+c*c || b*b==c*c+a*a ||c*c==b*b+a*a){
            printf("TRIANGULO RETANGULO\n");
        }
        if(a*a>b*b+c*c || b*b>c*c+a*a || c*c>b*b+a*a){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(a*a<b*b+c*c || b*b<c*c+a*a || c*c<b*b+a*a){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }
        if((a==b && b!=c) ||((b!=a)&& b==c) ||((a!=b)&& a==c) ){
            printf("TRIANGULO ISOSCELES\n");
        } 
    }else{
        printf("NAO FORMA TRIANGULO\n");
    }
    return 0;
}
