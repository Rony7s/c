/*   Lab 4
*   Rony Ahmmed 2002035
*/

#include<stdio.h>
#include<math.h>
int prime(int n);

int main()

{
    for(int i=0; i<4; i++)
    {
        int n, a, b, c, d, e, x,remainder,number;
        printf("Enter a positive number of 5 digit\n");
        scanf("%d",&n);

        prime(n);



    }
    return 0;

}


int prime(int n)
{
    int s =0;
    for(int i = 2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            s=s+1;
            if(s>0)
            {
                break;
            }
        }
    }

    if(s==0)
    {
        printf("This number is Prime\n");
    }
    else
    {
        printf("This number is not Prime\n");
    }
}


