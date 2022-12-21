#include <stdio.h>
int main()
{

    int n, rev = 0, remainder, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n =n/ 10;
    }
    printf("Reversed number = %d\n", rev);
    if(rev==temp){
        printf("Reversed number = Orginal number\n");
    }else{
        printf("Reversed number Not queal Orginal number\n");
    }

    return 0;
}
