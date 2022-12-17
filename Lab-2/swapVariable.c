/*
MD. RONY AHMMED SHAH
ICTE -BDU
 change variable value with temp variable
*/

#include <stdio.h>

int main() {

    int x , y, tempV;

    printf("Enter the Value of X\n");

    scanf("%d", &x);

    printf("Enter the Value of Y\n");

    scanf("%d", &y);

    tempV = x;

    x = y;

    y = tempV;



    printf("The value of X is: %d\nThe value Of Y is: %d", x,y);



    return 0;

}
