#include<stdio.h>

/**
*   @author Samrat Al Shahriar
*/

int main()
{
    while(1)
    {
        int n;
        printf("Enter value to check odd/even : ");
        scanf("%d", &n);

        if(n<0)
            break;

        if(n%2 == 0)
        {
            printf("\t%d is a even number.\n", n);
        }
        else
        {
            printf("\t%d is a odd number\n", n);
        }
    }
    return 0;
}
