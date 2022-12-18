#include <stdio.h>
int main() {
    int roll[5];
    roll[0] = 1001;
    roll[1] = 1001;
    roll[2] = 1002;
    roll[3] = 1202;
    roll[4] = 1234;
   // printf("Full: %d\n", roll[1]);
    
    int studentId[5] ={2002035, 2002036, 2002037, 2002038, 2002039};
    
    char nameF[5];
    nameF[0] ='R';
    nameF[1] ='T';
    nameF[2] ='M';
    nameF[3] ='S';
    nameF[4] ='X';
    
    char nameL[5] ={'R', 'T', 'M', 'S', 'X'};
     printf("Full: %s\n", nameL);
    
    char fullName[21] ="Md. Rony Ahmmed Shah";
    
   // printf("Name: %s\n", fullName);
    printf("Name: %c\n", fullName[19]);
    printf("Name: %c\n", fullName[0]);
    
    // this is single print
    printf("%d@icte.bdu.ac.bd\n", studentId[0]);
    printf("first Letter %c\n", nameF[0]);
    // this is loop print
    for(int i=0; i<5; i++){
        printf("%d@icte.bdu.ac.bd\n", studentId[i]);
        printf("first Letter %c\n",nameF[i]);
    }
    
    return 0;
}
