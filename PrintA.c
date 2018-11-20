#include<stdio.h>

/**
*   @author Samrat Al Shahriar
*
*/

int main()
{
    int i, j, k, l;
    for(i=0; i<=7; i++)
    {
        for(j=7; j>=i; j--)
        {
            printf(" ");
        }

        for(k=1; k<=2; k++)
        {
            printf("*");
        }

        for(l=1; l<=i; l++)
        {
            if(i>2 && i<5)
            {
                printf("**");
            }
            else
            {
                printf("  ");
            }
        }

        for(k=1; k<=2; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
