/* Only one loop for a two dimentional array input and output
*   -----Md. Rony Ahmmed Shah (BDU-ICTE) 2002035
*/
#include <stdio.h>

int main() {
    
    int row = 4;
    int col = 3;
    int student[row][col];
    int r=0, c=0;
    // this loop for array input
    while(1){
        printf("Enter row[%d] col[%d]\n", r, c);
        scanf("%d", &student[r][c]);
        
        c++;
        if(c==col){
            c=0;
            r++;
        }
        if(r==row){
            break;
        }
    }
    // this loop for array output
    r=0, c=0;
    while(1){
        printf("Enter row[%d] col[%d] is: %d\n", r, c, student[r][c]); 
        
        c++;
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
