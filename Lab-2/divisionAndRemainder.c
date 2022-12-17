/*
MD. RONY AHMMED SHAH
ICTE -BDU
Division and Remainder
*/


#include<stdio.h>


int main(){

    int a, b, quotient, Remainder;

    printf("Enter the values a and b\n");

    scanf("%d%d", &a, &b);

    quotient = a/b;

    Remainder = a%b;


    printf("Quotient is : %d\nRemainder is: %d", quotient, Remainder);


	return 0;

}
