#include<iostream>
using namespace std;

int main()
{

    long long int m, n, a;

    while(cin>>n>>m>>a) {
    long long int countW = 0, countH = 0;



    if(n%a==0)
    {
        countW = n/a;
    }
    else
    {
        countW = n/a;
        countW++;
    }


    if(m%a==0)
    {
        countH = m/a;
    }
    else
    {
        countH = m/a;
        countH++;

    }

    cout <<  countW * countH << endl;
    }

return 0;
}

