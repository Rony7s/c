/*Program to check leap year
* Md. Rony Ahmmed Shah ICTE
*/
#include <stdio.h>
int main()
{
    int year;

    /* Input year from user */
    printf("Enter year : ");
    scanf("%d", &year);

    if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0)){
        
        printf("LEAP YEAR\n");
        
    }else{
        
        printf("COMMON YEAR\n");
        
    }

    return 0;
}
