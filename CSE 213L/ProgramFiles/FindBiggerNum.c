#include<stdio.h>

/**
*   @author Samrat Al Shahriar
*/

int findBig(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}


int main()
{
    int a, b, c;

    printf("Enter 1st number : ");
    scanf("%d", &a);

    printf("Enter 2nd number : ");
    scanf("%d", &b);

    printf("Enter 3rd number : ");
    scanf("%d", &c);

    int g = findBig(c, findBig(a, b));
    printf("%d is the greatest number among three.\n", g);

    return 0;
}
