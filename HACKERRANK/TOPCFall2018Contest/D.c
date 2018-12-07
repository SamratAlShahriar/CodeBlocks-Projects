#include<stdio.h>


int main()
{
    int x, a, b, c;

    while(scanf("%d%d%d%d", &x, &a, &b, &c) != EOF)
    {
        double val = 2;

        if(x<0)
        {
            printf("We can find the value of x using Bashkara's Formula.");
        }
        else if(a<0)
        {
            val = (double) ((-1)*((b*x)+(c)))/(x*x);
            printf("%.2lf", val);
        }
        else if(b<0)
        {
            val = (double) ((-1)*((a*(x*x)+c)))/x;
            printf("%.2lf", val);
        }
        else if(c<0)
        {
            val = (double) (-1)*((a*x*x)+(b*x));
            printf("%.2lf", val);
        }
        printf("\n");

    }
    return 0;
}
