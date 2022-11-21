/*  Name:Md. Rony Ahmmed Shah [2002035]
    Name:
    Name:
    Group:
*/
#include<stdio.h>
int main(){
    int days, years;
    printf("Enter number of days: \n");
    scanf("%d", &days);
    years = days/365;
    days = days-(years*365);
    printf("Years: %d \nDays: %d", years, days);

    return 0;
}
