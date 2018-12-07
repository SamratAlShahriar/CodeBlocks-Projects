#include<bits/stdc++.h>


using namespace std;

int main()
{

    int a, b, c, result=0;

    while(cin>>a>>b>>c){

    int A[100];

    A[0] = a+b+c;
    A[1] = a+b*c;
    A[2] = a*b+c;
    A[3] = (a+b)*c;
    A[4] = (a*b)+c;
    A[5] = a+(b*c);
    A[6] = a*(b+c);
    A[7] = a*b*c;

    int max = A[0];
    for(int i = 1; i<8; i++){
        if(A[i]>max){
            max = A[i];
        }
    }
    cout<<max<<endl;


    }
    return 0;
}
