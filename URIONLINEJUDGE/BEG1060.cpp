#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter = 0;
    double NUM;
    while(cin>>NUM)
    {
        if(NUM>0)
            counter++;
    }
    cout<<counter<<" valores positivos"<<endl;

    return 0;
}
