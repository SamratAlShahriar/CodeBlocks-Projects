#include<stdio.h>

int bdc(int n);

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, n, m;

    scanf("%d",&m);

    for(n = 0; n < m; n++)
    {
        scanf("%d.%d.%d.%d", &a, &b, &c, &d);
        e = bdc(a);
        f = bdc(b);
        g = bdc(c);
        h = bdc(d);
        scanf("%d. %d. %d. %d", &i, &j, &k, &l);

        if(e==i && f==j && g==k && h==l)
        {
            printf("Case %d: Yes\n",n+1);
        }
        else
            printf("Case %d: No\n",n+1);

    }
}

int bdc(int n)
{
    int div, one=1, zero=0;
    while (n != 0)
    {
        div=n%2;
        n = n/2;
        zero+=div*one;
        one*=10;
    }
    return zero;
}
