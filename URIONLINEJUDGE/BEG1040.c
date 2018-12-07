#include<stdio.h>


int main()
{

    double a, b, c, d;

    while(scanf("%lf%lf%lf%lf", &a, &b, &c, &d) != EOF)
    {
        double avg = (a*2+b*3+c*4+d*1)/10.0;
        printf("Media: %.1lf\n", avg);

        if(avg>=7.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avg<5.0)
        {
            printf("Aluno reprovado.\n");
        }
        else
        {
            printf("Aluno em exame.\n");

            double ext;
            scanf("%lf", &ext);
            printf("Nota do exame: %.1lf\n", ext);

            double cAvg = (avg+ext)/2.0;
            if(cAvg >= 5.0)
            {
                printf("Aluno aprovado.\n");
            }
            else
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n", cAvg);

        }
    }



    return 0;
}
