#include<bits/stdc++.h>


using namespace std;

//not ok

int main()
{

    int TCASE;
    while(scanf("%d", &TCASE)!= EOF)
    {
        int A[1000];
        for(int i=0; i<TCASE; i++)
        {
            scanf("%d", &A[i]);

        }

        for(int j=0; j<TCASE; j++)
        {
            int counter = 0;
            int n = A[j];
            for(int k = 1; k<=n; k++)
            {
                if(n%k==0)
                {
                    counter++;
                }
            }
            if(counter%2==0)
            {
                printf("NO\n");
            }
            else
            {
                printf("YES\n");
            }

        }
    }
    return 0;
}

