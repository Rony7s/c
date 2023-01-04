#include <stdio.h>

int main() {
    int y, x;
    printf("Enter Year 2020 to 2022 (2 Digit)\n");
    scanf("%d%d", &x,  &y);
 
   for(x; x<=y; x++){
         for(int i=1; i<=50; i++){
             printf("Section :20%d ID : %d%.5d Email: %d%.5d@icte.bdu.ac.bd\n",x, x, i+2000, x, i+2000);
         }
   }

    return 0;
}
