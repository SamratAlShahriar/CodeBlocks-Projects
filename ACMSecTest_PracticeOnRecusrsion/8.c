#include<stdio.h>

int main()
{
    int mNum, divi = 2;
    scanf("%d", &mNum);
    if(checkPrime(mNum, divi) == 1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }

    return 0;
}

int checkPrime(int n, int div)
{
    if(n<=2)
    {
        return (n == 2) ? 1 : 0;
    }
    if(n%div == 0)
    {
        return 0;
    }
    if(div*div> n)
    {
        return 1;
    }

    return checkPrime(n, div+1);
}

