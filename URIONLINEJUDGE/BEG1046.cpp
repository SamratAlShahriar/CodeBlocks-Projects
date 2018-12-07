#include<bits/stdc++.h>

using namespace std;


int main()
{
    int START, END;

    while(cin>>START>>END){
            int RESULT = 0;
        if(START>=END){
            RESULT = 24 - START + END;
        } else {
            RESULT = END - START;
        }

        cout<<"O JOGO DUROU " << RESULT << " HORA(S)" << endl;
    }


    return 0;
}
