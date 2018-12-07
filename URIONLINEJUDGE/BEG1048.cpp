#include<bits/stdc++.h>



using namespace std;

int main()
{

    double SALARY;

    while(cin>>SALARY)
    {
        int RATE;
        double NEW_SALARY  = 0;

        if(SALARY<=400.00)
        {
            NEW_SALARY = SALARY + (SALARY * .15);
            RATE = 15;
        }
        else if(SALARY<=800.00)
        {
            NEW_SALARY = SALARY + (SALARY * .12);
            RATE = 12;
        }
        else if(SALARY<=1200.00)
        {
            NEW_SALARY = SALARY + (SALARY * .10);
            RATE = 10;
        }
        else if(SALARY<=2000.00)
        {
            NEW_SALARY = SALARY + (SALARY * .07);
            RATE = 7;
        }
        else if(SALARY>2000.00)
        {
            NEW_SALARY = SALARY + (SALARY * .04);
            RATE = 4;
        }

        cout<<setprecision(2)<< fixed <<"Novo salario: " << NEW_SALARY << endl;
        cout<<"Reajuste ganho: "<< NEW_SALARY - SALARY << endl;
        cout<<"Em percentual: "<<RATE <<" %"<<endl;
    }

    return 0;
}
