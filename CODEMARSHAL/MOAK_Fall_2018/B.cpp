#include<bits/stdc++.h>


using namespace std;


int main()
{

    double LP, OP;

    while(scanf("%lf%lf", &LP, &OP) != EOF)
    {
        double NL = (double) OP *(LP/100);
        printf("%.2lf\n", NL);

    }

    return 0;
}
