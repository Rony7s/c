/*   Lab 4
*   Rony Ahmmed 2002035
*/

#include<stdio.h>

int main(){

     int n, a, b, c, d, e, x,remainder;
     printf("Enter a positive number of 5 digit\n");
     scanf("%d", &n);
     number=n;

     if(n>0){
        // this section for individual
        a = n/10000;
        b = n/1000 - a*10;
        c = n/100 - a*100-b*10;
        d = n/10 - a*1000-b*100-c*10;
        e = n - a*10000-b*1000-c*100-d*10;

        printf("first Digit: %d\nSecond Digit: %d\nThird Digit: %d\nFourth Digit: %d\nFifth Digit:%d\n", a, b, c, d, e);
        // this section for check prime number
        int s =0;
        for(int i = 2; i<=(n/2); i++){
            if(n%i==0){
                s=s+1;
                if(s>0){
                    break;
                }
            }
        }
        if(s==0){
            printf("This number is Prime\n");
        }else{
            printf("This number is not Prime\n");
        }


        // this section for Leap year

        if( (n%4==0) && (n%100!=0) || (n%400==0)){
            printf("This years is Leap Year\n");
        }else{
            printf("This years is Not Leap Year\n");
        }



    }else{
            printf("This number is not positive\n");
         }

    return 0;

}
int printdigit(int n)
{

    while(n>0)
     {
         remainder=n%10;
         n=n/10;
         printf("%d\n",remainder);
     }
}

