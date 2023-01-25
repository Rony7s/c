// Rony Ahmmed Shah BDU ICTE

#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld", &n);
	
	int i=0, c=0;
	int x[15];
	while(n>0){
		x[i]=n%10;
		n=n/10;
		i++;
		c++;
		if(c==3 && n>0){
			x[i]=99;
			i++;
			c=0;
			}
		}
		if(i==0){
			printf("0\n");
			}
		while(i--){
			if(x[i]==99){
				printf(",");
				}else{
				printf("%d", x[i]);
					}
			
			}
	
	return 0;
}
