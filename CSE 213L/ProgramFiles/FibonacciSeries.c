#include<stdio.h>

/**
    author Samrat Al Shahriar
*/



int main()
{
    int n, i, num1 = 0, num2 = 1, fibNum = 0;

    printf("Enter the number of terms for Fibonacci : ");
    scanf("%d", &n);
    printf("Fibonacci Series : ");

    for(i=0; i<n; i++)
    {
        printf("%d ", num1);
        fibNum = num1 + num2;
        num1 = num2;
        num2 = fibNum;
    }

    return 0;
}
