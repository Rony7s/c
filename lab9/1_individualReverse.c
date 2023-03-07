// Rony Ahmmed 2002035
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter a string:\n");
    gets(a);
    int i = strlen(a);
    while(i--){
        printf("%c\t", a[i]);
    }
    return 0;
}
