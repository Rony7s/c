#include<stdio.h>
int main(){
		int h, m;
	 
		scanf("%d%d", &h, &m);
		float a = 0.5*(60*h-11*m);
		if(a<0){
			a*=(-1);
			}
	if(a>180){
		a= 360-a;
	}
		
		printf("%f", a);
			
	return 0;
}
