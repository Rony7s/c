#include<stdio.h>
int main(){
	int n = 2;
	int i, j;
	int a[n][n];
	for(i= 0; i<n; i++){
		for(j=0; j<n; j++){
			 printf("a [%d][%d]\n",  i,  j);
			 scanf("%d", &a[ i ] [ j ] );
			}
		}
		
		for(i= 0; i<n; i++){
		for(j=0; j<n; j++){
			 printf("a[%d][%d] = %d\t", i, j, a[i][j]);
		
			}
		}
	
	return 0;
	}
