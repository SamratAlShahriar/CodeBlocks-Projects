#include<iostream>

using namespace std;

int main()
{
    string a, b;

    int lenA, lenB;

    std::getline(std::cin, a);
    std::getline(std::cin, b);

    lenA = a.size();

    lenB = b.size();


    cout << lenA << " " << lenB << endl;
    cout << a << b << endl;

    char a0 = a[0];
    char b0 = b[0];
    a[0] = b0;
    b[0] = a0;

    cout << a << " " << b << endl;
    return 0;
}


