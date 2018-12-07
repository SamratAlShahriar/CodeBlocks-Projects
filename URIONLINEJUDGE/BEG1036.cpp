#include<iostream>
#include<stdio.h>
#include<math.h>

int main()
{

    double a, b, c;

    while(scanf("%lf%lf%lf", &a, &b, &c) != EOF)
    {
        bool error = false;

        double t;

        if(a==0)
        {
            error = true;
        }
        else
        {
            t = (b*b)-(4*c*a);

            if(t<0)
            {
                error = true;
            }
            else
            {
                double r1 = (-b + sqrt(t)) / (2 * a);
                double r2 = (-b - sqrt(t)) / (2 * a);

                printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
            }
        }

        if(error){
            printf("Impossivel calcular\n");
        }


    }
    return 0;
}
