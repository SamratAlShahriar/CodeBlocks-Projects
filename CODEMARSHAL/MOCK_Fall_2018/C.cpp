
#include<bits/stdc++.h>


using namespace std;


int main()
{

    int C, B, S;

    while(scanf("%d%d%d", &C, &B, &S) != EOF)
    {
        if(C%B==0)printf("0\n");
        else if((C%B)%S==0)printf("1\n");
        else printf("-1\n");
    }

    return 0;
}
