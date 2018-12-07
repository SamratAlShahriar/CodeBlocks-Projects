#include<bits/stdc++.h>


using namespace std;


int main()
{


    int CASE;
    scanf("%d", &CASE);
    for(int k = 1; k<=CASE; k++)
    {
        int TN, total = 1000;
        scanf("%d", &TN);
        int A[100];

        for(int i = 0; i<TN; i++){
            char ch;
            int val;
            scanf("\n%c", &ch);
            scanf("%d", &val);
            if(ch=='+')total+=val;
            else if(ch=='-')total-=val;
        }
        printf("Case %d: %d\n", k, total);

    }

    return 0;
}

