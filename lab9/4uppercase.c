// Rony Ahmmed 2002035
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter a string:\n");
    gets(a);
    int i=0;
    while( a[i] != '\0'){
        if(a[i]>=97 && a[i]<=122){
            printf("%c", a[i]-32);
        }else{
            printf("%c", a[i]);
        }
        i++;
    }

    return 0;
}

