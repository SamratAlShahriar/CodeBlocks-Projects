#include<stdio.h>


int main()
{
    double a = 4.00, b = 4.50, c = 5.00, d = 2.00, e = 1.5;

    int code, qty;

    while(scanf("%d%d", &code, &qty) != EOF)
    {
        double total = 0;

        switch(code)
        {
        case 1 :
            total  = a * qty;
            break;
        case 2 :
            total  = b * qty;
            break;
        case 3 :
            total  = c * qty;
            break;
        case 4 :
            total  = d * qty;
            break;
        case 5 :
            total  = e * qty;
            break;
        default :
            break;
        }

        printf("Total: R$ %.2lf\n", total);
    }
    return 0;
}
