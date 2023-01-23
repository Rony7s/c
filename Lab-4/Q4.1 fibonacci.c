// Lab array
// Task-1: Program to calculate first 20 Fibonacci numbers.
// Rony Ahmmed Shah BDU-ICTE


#include<stdio.h>
int main(){
	int n = 20;
	int a = -1, b= 1, c;
	while(n--){
		c = a+b;
		// fibonacci number 
		printf("%d\t", c);
		
		a = b;
		b = c;
		}
	
	
	return 0;
}
