#include<stdio.h>

/**
*   @author Samrat Al Shahriar
*/

int main()
{
    double n, m, o, p, q;

    printf("Enter first number : ");
    scanf("%lf", &n);
    printf("Enter second number : ");
    scanf("%lf", &m);
    printf("Enter third number : ");
    scanf("%lf", &o);

    p = n + m + o;
    q = p / 3;

    printf("Sum of 3 numbers is : %.3lf\n", p);
    printf("Average of 3 numbers is : %.3lf\n", q);
    return 0;
}
