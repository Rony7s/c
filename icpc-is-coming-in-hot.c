//ICPC Is Coming in Hot!

//Rony Ahmmed BDU-ICTE
#include <stdio.h>

int main() {
    char n[10000];
    int a[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s", n);
    int i=0;
    while(n[i] !='\0'){
        int x = n[i]-'0';
        a[x]++;
        i++;
    }
    int r=0;
    for(i=1; i<10; i++){
        if(a[0]<a[i]){
            a[0]=a[i];
            r=i;
        }
    }
    printf("%d\n", r);
    return 0;
}
