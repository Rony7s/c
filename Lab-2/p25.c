/*  Md. Rony Ahmmed Shah
    problem 5
    check Vowel and Consonant
*/
#include<stdio.h>
int main(){

    char a;
    printf("Enter a Charecter\n");
    scanf("%c", &a);
    if( a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        printf("This Character is Vowel\n");
    }else{
     printf("This Character is Consonant\n");
    }
    return 0;
}
