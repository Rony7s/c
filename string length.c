// count string length 
// Rony Ahmmed BDU ICTE
#include<stdio.h>

int main() {
    char a[100];
    gets(a);
    int l=0;
    while(a[l]!=0){
        l++;
    }
    printf("%d\n", l);
   
    return 0;
}
