#include<stdio.h>

int revNum(int num, int revN)
{
    if(num==0)
        return 0;
    if(num==1)
        return revN*10+num%10;

    return revNum(num/10, (revN*10)+(num%10));

}

int main()
{
    int n;
    scanf("%d", &n);

    if(n==revNum(n, 0))
        printf("Pallindrome!");
    else
        printf("Not Pallindrome!");
    printf("\n");

    return 0;
}
