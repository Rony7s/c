/*   Lab 4
*   Rony Ahmmed 2002035
*/

#include<stdio.h>

int main(){

     int n;
     printf("Enter a positive number\n");
     scanf("%d", &n);
     if(n>0){
        int sum =0;
         for(int i =1; i<=n; i++){

            sum= sum+i;
         }
        printf("Summation of all number that less and equal: %d", sum);
    }else{
            printf("This number is not positive\n");
         }

    return 0;
}
