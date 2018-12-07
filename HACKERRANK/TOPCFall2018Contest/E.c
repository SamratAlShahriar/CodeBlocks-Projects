#include<stdio.h>


int main()
{

    int tCase, i;
    scanf("%d", &tCase);
    for(i=1; i<=tCase; i++)
    {


        double InitBal, Prc;
        double finalBal=0;
        scanf("%lf%lf", &InitBal, &Prc);
        finalBal = InitBal;

        while(InitBal>=1)
        {
            finalBal += (InitBal*(Prc/100));
            InitBal = InitBal * (Prc/100);
        }

        printf("Case %d: %.2lf\n", i, finalBal);
    }

    return 0;
}
