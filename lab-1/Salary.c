#include <stdio.h>
int main() {
    float FIXED_SALARY,SALES,TOTAL;
    char name[10];
    printf("name : \n");
    scanf("%s",name);
   printf("FIXED SALARY: ");
   scanf("%f", &FIXED_SALARY);
   printf("SALES: ");
   scanf("%f", &SALES);

   TOTAL=FIXED_SALARY+((SALES*15)/100);
   printf("Total=%f",TOTAL);

    return 0;
}
