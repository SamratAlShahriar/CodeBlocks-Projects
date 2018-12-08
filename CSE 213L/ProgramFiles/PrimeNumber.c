#include<stdio.h>

/**
*   @author Samrat Al Shahriar
*/

int main()
{

    while(1)
    {
        int n, i, isPrime = 0;
        printf("Enter a positive integer : ");
        scanf("%d", &n);
        if(n<=0)
        {
            break;
        }

        for(i = 2; i * i <= n; i++)
        {
            if(n%i == 0)
            {
                isPrime = 1;
                break;
            }
        }

        if(n == 1)
        {
            printf("1 is not a prime number.\n");
        }
        else
        {
            if(isPrime == 0)
            {
                printf("%d is a prime number.\n", n);
            }
            else
            {
                printf("%d is not a prime number.\n", n);
            }
        }

    }

    return 0;
}
