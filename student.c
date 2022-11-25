#include <stdio.h>
#include<string.h>

int main()
{
    int n,  a;
    printf("Enter the Total number of student\n");
    scanf("%d", &n);
    
    char name[n][30];
    char phone[n][11];
    char loca[n][20];
    
    for(a = 0; a<n ; a++){
    
    printf("Enter the full name of Roll %d\n", a+1);
    scanf(" %[^\n]", name[a]);
    
    printf("Enter the phone of Roll %d\n", a+1);
    scanf(" %[^\n]", phone[a]);
    
    printf("Enter the Location of Roll %d\n", a+1);
    scanf(" %[^\n]", loca[a]);
    }
    
    for(a = 0; a<n ; a++){
    printf("Roll %d\n Name: %s\n Phone: %s\n Location: %s\n", a+1, name[a], phone[a], loca[a]);
    
    }
    
    return 0;
}
