#include<stdio.h>


int main()
{
    while(1)
    {
        long long n, i, res;
        scanf("%lld", &n);
        int counter = 0;
        res = -1;

        if(n==0)
        {
            break;
        }

        if(n<0){
            n *= -1;
        }

        for(i = 2; i*i <= n && n != 1; i++)
        {
            while(n%i == 0)
            {
                n /= i;
                res = i;
            }
            if (res == i)
            {
                counter++;

            }
        }

        if (n != 1 && res != -1)
        {
            res = n;
        }
        else if (counter == 1)
        {
            res = -1;
        }

        printf("%lld\n", res);
    }

    return 0;
}
