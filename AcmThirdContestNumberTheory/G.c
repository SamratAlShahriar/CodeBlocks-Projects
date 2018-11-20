#include<stdio.h>

int chkGCD(int a, int b)
{
    return b == 0 ? a : chkGCD(b, a%b);

}


int main()
{
    int sum, gcd;

    scanf("%d%d", &sum, &gcd);
    if(chkGCD(gcd, (sum-gcd)) == gcd && sum != gcd)
    {
        printf("%d %d\n", sum-gcd, gcd);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
