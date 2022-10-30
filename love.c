/******************************************************************************
    MD. RONY AHMMED SHAH
    ICTE BDU
    rony.bdu@gmail.com

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello... Beautiful!\nWhat is your name?\n");
    char name[30];
    scanf("%s", name);
    printf("%s , WOW what a beautiful name \nAre you single? [yes 1 /no 2]", name);
    int x, y;
    scanf("%d", &x);
    if(x==1){
        printf("No Problem, \njust say, how much love do you want? 10 or 100 or 1000 ... ");
        
        
        scanf("%d", &y);
        for(int a=1; a<=y; a++){
            printf("%s I Love you %d \n", name, a);    
        }
        printf("Thank you very much %s", name);
        
    }else{
        printf("  try again ...");
    }

    return 0;
}
