/*  Md. Rony Ahmmed Shah
    problem 3
    check greater number and difference
*/
#include<stdio.h>
int main(){

    int a, b, diff;
    printf("Enter Values of A and B:\n");
    scanf("%d%d", &a, &b);
    if(a>b){
        printf("A is greater than B\n");
        diff = a -b;
        printf("Difference Between A and B is: %d\n", diff);

    }
    return 0;
}
