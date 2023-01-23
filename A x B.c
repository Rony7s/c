// matrix multipication A x B
// Rony Ahmmed Shah
#include<stdio.h>
int main(){
	int r1, c1, r2, c2, r, c;
	printf("Enter A matrix Row and Col number\n");
	scanf("%d%d", &r1, &c1);
	
	printf("Enter B matrix Row and Col number\n");
	scanf("%d%d", &r2, &c2);
	if(c1==r2){
    	int i, j;
    	int a[r1][c1];
    	int b[r2][c2];
     
    	r=r1; c= c2;
    	int x[r][c];
    	// input A matrix start
    	for(i= 0; i<r1; i++){
    		for(j=0; j<c1; j++){
    			 printf("Enter A [%d][%d] :\n",  i+1,  j+1);
    			 scanf("%d", &a[i] [j] );
    		}
    	}
    	// A matrix end
    	// input B matrix start
    		
    	for(i= 0; i<r2; i++){
    		for(j=0; j<c2; j++){
    			 printf("B [%d][%d]\n",  i+1,  j+1);
    			 scanf("%d", &b[ i ] [ j ] );
    		}
    	}
    	// B matrix end	
    	printf("AxB = X\n");
    	// A * B  matrix start
    		for(i= 0; i<r1; i++){
    		for(j=0; j<c2; j++){
    			 x[i][j]=0;
    			 // x value create
    			 for(int k=0; k<c1; k++){
    			     x[i][j] += a[i][k]*b[k][i];
    			 }
    			 // print of result
    			 printf("X [%d][%d] = %d\t", i, j, x[i][j]);
    		
    			}
    		}
    	// A * B = X  matrix end
    	}else{
    	    printf("Not posible :(\n");
    	}
    	   
 
	return 0;
	}
