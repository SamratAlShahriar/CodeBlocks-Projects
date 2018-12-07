#include<bits/stdc++.h>


using namespace std;


int main()
{


    long x, y, n;
    while(scanf("%ld%ld%ld", &x, &y, &n) != EOF)
    {
        if(y>=n)
            printf("Left\n");
        else
            printf("Right\n");

    }

    return 0;
}

