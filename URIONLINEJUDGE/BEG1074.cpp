
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x, i;
    cin>>x;
    for(i=1; i<=x; i++)
    {
        int n;
        cin>>n;
        if(n==0)
        {
            cout<<"NULL"<<endl;
            continue;
        }
        if(n%2==0)
            cout<<"EVEN ";
        else
            cout<<"ODD ";

        if(n>0)
            cout<<"POSITIVE";
        else
            cout<<"NEGATIVE";

        cout<<endl;

    }

    return 0;
}







