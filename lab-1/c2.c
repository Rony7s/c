/*
MD. RONY AHMMED SHAH
BDU-ICTE

area of all
*/
#include <stdio.h>
#define PI 3.14159
int main() {


float A, B, C, tringle_area, circle_area, trapezium_area, square_b, rectangle;

    scanf("%f %f %f", &A, &B, &C);


tringle_area = 0.5*A*C;
circle_area = PI *C*C;
trapezium_area = 0.5*(A+B)*C;
square_b = B*B;
rectangle = A*B;



printf("TRIANGULO: %.3f\n", tringle_area);
printf("CIRCULO: %.3f\n", circle_area);
printf("TRAPEZIO: %.3f\n", trapezium_area);
printf("QUADRADO: %.3f\n", square_b);
printf("RETANGULO: %.3f\n", rectangle);


    return 0;
}
