#include<bits/stdc++.h>


using namespace std;

int main()
{
    int NUM[100];
    int n, i;
    for(i=0; i<100; i++)
    {
        cin>>NUM[i];
    }
    int MAX = NUM[0];
    int position = 0;

    for(i=1; i<100; i++)
    {
        if(NUM[i]>MAX)
        {
            MAX=NUM[i];
            position = i;
        }
    }

    cout<<MAX<<endl<<position+1<<endl;

    return 0;
}


