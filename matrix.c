#include<stdio.h>
int main(){
	int r1, c1, r2, c2, r, c;
	printf("Enter A matrix Row and Col number\n");
	scanf("%d%d", &r1, &c1);
	
	printf("Enter B matrix Row and Col number\n");
	scanf("%d%d", &r2, &c2);
	
	int i, j;
	int a[r1][c1];
	int b[r2][c2];
	if(r1==r2 && c1==c2){
	r=r1; c= c1;
	int x[r][c];
	
	for(i= 0; i<r1; i++){
		for(j=0; j<c1; j++){
			 printf("a [%d][%d]\n",  i,  j);
			 scanf("%d", &a[ i ] [ j ] );
			}
		}
		
		for(i= 0; i<r2; i++){
		for(j=0; j<c2; j++){
			 printf("B [%d][%d]\n",  i,  j);
			 scanf("%d", &b[ i ] [ j ] );
			}
		}
		
		for(i= 0; i<r; i++){
		for(j=0; j<c; j++){
			 x[i][j]=a[i][j]+b[i][j];
			 printf("a+b [%d][%d] = %d\t", i, j, x[i][j]);
		
			}
		}
	}
	
	return 0;
	}
