// Rony Ahmmed 2002035
#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    printf("Enter a string:\n");
    gets(a);
    int i=0, w=0, v=0;
    while( a[i] != '\0'){
        if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u'
            ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' || a[i]=='U'){
            v++;
        }
        if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122){
            w++;
        }
        i++;
    }
    printf("Vowel is: %d\nConsonent is: %d", v, w-v);
    return 0;
}

