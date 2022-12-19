/* Only one loop for a 3D dimentional array input and output
*   -----Md. Rony Ahmmed Shah (BDU-ICTE) 2002035
*/
#include <stdio.h>

int main() {
    
    int row = 1;
    int col = 2;
    int high = 2;
    int student[row][col][high];
    int r=0, c=0, h=0;
    // this loop for array input
    while(1){
        printf("Enter row[%d] col[%d] high[%d]\n", r, c, h);
        scanf("%d", &student[r][c][h]);
       h++;
        if(h==high){
            h=0;
            c++;
        }
        
        if(c==col){
            c=0;
            r++;
        }
        if(r==row){
            break;
        }
    }
    // this loop for array output
    
    r=0, c=0, h=0;
    while(1){
        printf("Enter row[%d] col[%d] high [%d]is: %d\n", r, c, h, student[r][c][h]); 
        
        h++;
        if(h==high){
            h=0;
            c++;
        }
        
        if(c==col){
            c=0;
            r++;
        }
        if(r==row){
            break;
        }
    }
    
    return 0;
}
