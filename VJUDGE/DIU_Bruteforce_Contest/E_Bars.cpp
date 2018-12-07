#include<bits/stdc++.h>

using namespace std;

int main()
{

    int T;
    cin>>T;
    while(T--){
        int n, p, A[20];
        cin>>n>>p;
        for(int i=0; i<p; i++){
            cin>>A[i];
        }
        int subset = pow(2, p);
        cout<<subset<<endl;
    }


    return 0;
}
