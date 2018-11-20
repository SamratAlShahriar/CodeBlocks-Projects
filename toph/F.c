#include<stdio.h>
#include<math.h>

#define PI 3.1415926


int main()
{
    int t, i;
    double c, d;

    scanf("%d", &t);

    if(t>0)
    {
        for(i = 1; i<=t; i++)
        {
            scanf("%lf", &c);
            d = c/PI;
            printf("Case %d: %.3lf\n", i, d);
        }
    }

    return 0;
}
