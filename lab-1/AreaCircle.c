/*  Name:Md. Rony Ahmmed Shah [2002035]
    Name:
    Name:
    Group:
*/
#include <stdio.h>
#define PI 3.14159
int main() {
    float area, radius;
    printf("Enter the radius:\n");
    scanf("%f", &radius);
    area = (PI * radius * radius) ;
    printf("A = %.4f", area);

    return 0;
}
