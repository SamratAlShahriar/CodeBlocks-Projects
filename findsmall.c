#include<stdio.h>

int main()
{

    int a, b, c;
    int temp1, temp2;
    scanf("%d%d%d", &a, &b, &c);

    temp1 = minimum(a,b);
    temp2 = minimum(temp1, c);

    printf("The smaller number is %d\n", temp2);

    return 0;
}

int minimum(int a, int b)
{
    int temp;

    if (a < b)
    {
        temp = a;
    }
    else
    {
        temp  = b;
    }

    return temp;
}
