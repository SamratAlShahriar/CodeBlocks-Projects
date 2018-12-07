
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int countE = 0, countO = 0, countP = 0, countN = 0;
    int NUM;
    while(cin>>NUM)
    {
        if(NUM%2==0)
            countE++;
        else
            countO++;

        if(NUM>0)
            countP++;
        else if(NUM<0)
            countN++;
    }

    cout<<countE<<" valor(es) par(es)"<<endl;
    cout<<countO<<" valor(es) impar(es)"<<endl;
    cout<<countP<<" valor(es) positivo(s)"<<endl;
    cout<<countN<<" valor(es) negativo(s)"<<endl;

    return 0;
}


