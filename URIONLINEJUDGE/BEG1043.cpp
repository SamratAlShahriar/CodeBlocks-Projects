#include<bits/stdc++.h>


using namespace std;

int main()
{
    double a, b, c;
    while(cin>>a>>b>>c)
    {
        if(a+b>c && b+c>a && a+c>b)
        {
            double per = a+b+c;
            printf("Perimetro = %.1lf\n", per);
        }
        else
        {
            double area = ((a+b)/2)*c;
            printf("Area = %.1lf\n", area);
        }
    }

    return 0;
}
