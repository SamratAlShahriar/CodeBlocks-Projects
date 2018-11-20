#include<stdio.h>

int main()
{

    int i, j, maxStar;

    scanf("%d", &maxStar);

    for(i=0; i<maxStar; i++)
    {
        for(j = 0; j<i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
