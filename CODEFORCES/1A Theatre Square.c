#include<stdio.h>

int main()
{

    long long int m, n, a;

    while(scanf("%lld%lld%lld", &n, &m, &a) != EOF)
    {
        long long int countW = 0, countH = 0;


        while(n>0)
        {
            countW++;
            n-=a;
        }
        while(m>0)
        {
            countH++;
            m-=a;
        }

        long long int res = countW * countH;

        printf("%lld\n", res);
    }

    return 0;
}
