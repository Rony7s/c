/*check prime number
* MD. RONY AHMMED SHAH BDU ICTE
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n, i, s;
    printf("Enter a number:\n");
    scanf("%d", &n);
    
    if(n>1){
        
        s = 0;
        for( i = 2; i <= sqrt(n) ; i++){
            if(n%i==0){
                s=s+1;
                break;
            }
        }
        if(s==0){
            printf("This number is Prime\n");
        }else{
            printf("This number is not Prime\n");
        }
    
    }else{
        printf("This number is not Prime\n");
    }
    
    return 0;
}
    