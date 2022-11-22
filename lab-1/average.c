#include <stdio.h>
int main() {
    float A,B,C,MEDIA;
    printf("Enter the value of A :\n");
    scanf("%f", &A);
    printf("Enter the value of B :\n");
    scanf("%f", &B);
    printf("Enter the value of C :\n");
    scanf("%f", &C);

    MEDIA =(A*0.2+B*0.3+C*0.5) ;
    printf("MEDIA = %.1f", MEDIA);

    return 0;
}
