#include<stdio.h>

void printTernary(long n)
{
    int mod = 0;
    if(n==0)
    {
        return;
    }
    mod = n%3;
    printTernary(n/3);
    printf("%d", mod);

}

int main()
{
    long num;
    while(scanf("%ld", &num))
    {
        if(num<0)
        {
            break;
        }
        else  if(num == 0)
        {
            printf("%ld", num);
        }
        else
        {
            printTernary(num);
        }
        printf("\n");
    }

    return 0;
}
