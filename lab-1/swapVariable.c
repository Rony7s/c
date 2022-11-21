/*  Name:Md. Rony Ahmmed Shah [2002035]
    Name:
    Name:
    Group:
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
