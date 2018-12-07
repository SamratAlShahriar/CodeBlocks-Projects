
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int counter = 0;
    double NUM, sum = 0, avg;
    while(cin>>NUM)
    {
        if(NUM>0){
            counter++;
            sum+=NUM;
            }
    }
    avg = sum/counter;
    cout<<counter<<" valores positivos"<<endl;
    cout<<setprecision(1)<<fixed<<avg<<endl;

    return 0;
}
