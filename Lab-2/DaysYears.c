/*
MD. RONY AHMMED SHAH
ICTE -BDU
 convart days to years month days
*/

#include<stdio.h>

int main(){

    int days, month, years;

    printf("Enter number of days: \n");

    scanf("%d", &days);

    years = days/365;

    month = (days-(years*365))/30;

    days = days-(years*365+month*30);

    printf("Years: %d \nMonth: %d\nDays: %d", years, month, days);



    return 0;

}
