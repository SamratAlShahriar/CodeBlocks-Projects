#include<stdio.h>

int main()
{
    int i;
    scanf("%d", &i);
    printf("%d", getFibo(i));

    return 0;
}


int getFibo(int n)
{
    if(n<=0)
    {
        return 0;
    }
    else if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return getFibo(n-1) + getFibo(n-2);
    }
}
