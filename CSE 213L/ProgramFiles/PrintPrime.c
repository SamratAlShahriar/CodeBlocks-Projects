#include<stdio.h>


int main()
{
    int n, i, j;

    printf("Enter a number to show prime within : ");
    scanf("%d", &n);

    if(n<=1)
        printf("There is no prime before 2.");
    else if(n>2)
    {
        for(i=2; i<=n; i++)
        {
            int ck = 1;
            for(j=2; j<i; j++)
            {
                if(i%j == 0)
                {
                    ck = 0;
                    break;
                }
            }
            if(ck==1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
