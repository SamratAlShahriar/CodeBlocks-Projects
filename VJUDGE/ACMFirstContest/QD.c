#include<stdio.h>

int main()
{
    int tCase, s, d, i, j;

    scanf("%d", &tCase);
    while(tCase--)
    {
        scanf("%d%d", &s, &d);
        if(s>d && d == 0)
        {
            i = s;
            j = d;
            printf("%d %d\n", i, j);
        }
        else if(s>d)
        {
            i = (s+d)/2;
            j = (s-d)/2;
            printf("%d %d\n", i, j);
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}
