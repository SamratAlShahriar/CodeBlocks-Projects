#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n, i;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        double a, b, c;
        cin>>a>>b>>c;
        double res = ((a*2)+(b*3)+(c*5))/(2+3+5);
        cout<<setprecision(1)<<fixed<<res<<endl;
    }

    return 0;
}

