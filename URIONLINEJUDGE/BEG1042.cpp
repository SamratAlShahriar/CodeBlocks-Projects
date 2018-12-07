#include<bits/stdc++.h>
using namespace std;

int printMin(int x, int y)
{

}

int main()
{
    int a, b, c;
    while(cin >> a >> b >> c)
    {
        int x, y, z;
        x=a;
        y=b;
        z=c;

        if(x>z)
            swap(x,z);
        if(x>y)
            swap(x,y);
        if(y>z)
            swap(y,z);

        printf("%d\n%d\n%d\n", x, y, z);

        printf("\n%d\n%d\n%d\n", a, b,c);
    }


    return 0;
}
