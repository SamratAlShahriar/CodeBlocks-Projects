#include<stdio.h>


int main()
{
    int a, b, c, win;

    scanf("%d%d%d", &a, &b, &c);
    if(a>b)
    {
        win = a;
    }
    else
    {
        win = b;
    }

    if(win>c)
    {
        printf("%d", win);
    }
    else
    {
        printf("%d", c);
    }

    return 0;
}
