#include<stdio.h>


int main()
{

    int cNum, i;
    double x1, x2, y1, y2, d;

    scanf("%d", &cNum);

    if(cNum>0)
    {
        for(i = 1; i<=cNum; i++)
        {
            scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

            d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
            printf("Case %d: %.4lf\n", i, d);
        }
    }

    return 0;
}
