#include<bits/stdc++.h>

using namespace std;


int main()
{

    int SH, SM, EH, EM;
    while(cin>>SH>>SM>>EH>>EM)
    {
        int RH = 0, RM = 0;

        if(SH<EH)
        {
            if(SM<=EM)
            {
                RM = EM - SM;
                RH = EH - SH;
            }
            else
            {
                RM = 60 - SM + EM;
                RH = EH - SH - 1;
            }
        }
        else
        {
            if(SM<=EM)
            {
                RM = EM - SM;
                RH = 24 - SH + EH;
            }
            else
            {
                RM = 60 - SM + EM;
                RH = 24 - SH + EH -1;
            }
        }

        cout << "O JOGO DUROU " << RH << " HORA(S) E " << RM << " MINUTO(S)" << endl;

    }



    return 0;
}
