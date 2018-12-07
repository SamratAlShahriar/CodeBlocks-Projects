#include<bits/stdc++.h>


using namespace std;


int main()
{
    int tCase, i, j, k, l, m, n, o;
    bool nonFirst=false;
    int A[100];

    while(cin >> tCase)
    {
        if(tCase==0)
        {
            break;
        }

        if(nonFirst){
        cout<<endl;
        }
        nonFirst = true;

        for(i = 0; i<tCase; i++)
        {
            cin >> A[i];
        }


        for(j=0; j<=tCase-6; j++)
        {
            for(k=j+1; k<=tCase-5; k++)
            {
                for(l=k+1; l<=tCase-4; l++)
                {
                    for(m=l+1; m<=tCase-3; m++)
                    {
                        for(n=m+1; n<=tCase-2; n++)
                        {
                            for(o=n+1; o<=tCase-1; o++)
                            {
                                printf("%d %d %d %d %d %d\n", A[j], A[k], A[l], A[m], A[n], A[o]);
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
