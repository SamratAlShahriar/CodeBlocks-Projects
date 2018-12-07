#include<stdio.h>

int main()
{
    int test, g, l;

    scanf("%d", &test);
    while(test--)
    {
        scanf("%d%d", &g, &l);
        if(l%g==0)
        {
            printf("%d %d\n", g, l);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
