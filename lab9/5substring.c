// Rony Ahmmed 2002035
#include<stdio.h>
#include<string.h>
int main(){
    char a[100], s[100];

    printf("Enter a string:\n");
    gets(a);

    int x, z, i=0;
    printf("Enter the position and length of substring\n");
    scanf("%d%d", &x, &z);

    for( x; x<=z; x++){
        s[i]=a[x-1];
        i++;
    }
    i=0;
    while(s[i]!='\0'){
        printf("%c", s[i]);
        i++;
    }

    return 0;
}


