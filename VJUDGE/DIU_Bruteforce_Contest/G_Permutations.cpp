#include<bits/stdc++.h>

using namespace std;




int main()
{
    int T;
    cin >> T;
    for(int t = 1; t<=T; t++)
    {
        int N, K;
        cin >> N >> K;
        int st[26];

        for(int ch=65; ch<N+65; ch++)
        {
            st[ch-65] = ch;
        }

        int count = 0;
        cout<<"Case "<<t<<":"<<endl;
        do
        {
            if(count++ == K)
                break;

            for(int i=0; i<N; i++)
            {
                printf("%c", st[i]);
            }
            printf("\n");
        }
        while(next_permutation(st, st+N));

    }

    return 0;
}
