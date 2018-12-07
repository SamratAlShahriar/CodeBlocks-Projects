#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;

    int total = 0;
    int CT = 0;
    int RT = 0;
    int ST = 0;

    while(T--)
    {
        int n;
        char ch;
        cin>>n;
        cin>>ch;
        total+=n;
        if(ch=='C')CT++;
        else if(ch=='R')RT++;
        else if(ch=='S')ST++;
    }

    cout<<"Total: "<<total<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<CT<<endl;
    cout<<"Total de ratos: "<<RT<<endl;
    cout<<"Total de sapos: "<<ST<<endl;
    cout<<"Percentual de coelhos: "<<setprecision(2)<<fixed<<(CT/total)*100<<" %"<<endl;
    cout<<"Percentual de ratos: "<<setprecision(2)<<fixed<<(RT/total)*100<<" %"<<endl;
    cout<<"Percentual de sapos: "<<setprecision(2)<<fixed<<(ST/total)*100<<endl;

    return 0;
}



