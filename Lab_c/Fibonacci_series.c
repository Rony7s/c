/*Fibonacci series
* MD. RONY AHMMED SHAH BDU ICTE
*/
#include <stdio.h>
int main() {
    int num1 = 0, num2 = 1, nextNum = 0, n;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    // displays the first two terms which is always 0 and 1
    printf("Fibonacci Series: %d, %d, ", num1, num2);
    nextNum = num1 + num2;

    do {
        printf("%d, ", nextNum);
        num1 = num2;
        num2 = nextNum;
        nextNum = num1 + num2;
    
    } while ( nextNum < n);

    return 0;
}
