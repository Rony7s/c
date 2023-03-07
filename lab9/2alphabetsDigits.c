// Rony Ahmmed 2002035
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter a string:\n");
    gets(a);
    int i=0, w=0, n=0;
    while( a[i] != '\0'){
        if(a[i]>=48 && a[i]<=57){
            n++;
        }
        if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122){
            w++;
        }
        i++;
    }
    printf("Alphabets is: %d\nNumber is: %d", w, n);
    return 0;
}

