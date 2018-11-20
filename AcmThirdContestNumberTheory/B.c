#include<stdio.h>
#define SIZE 64

char bArray[SIZE];
char cString[SIZE];


char* makeBinary(long n)
{
    int mod = 0, i;
    for(i=0; i<SIZE; i++)
    {
        if(n<=0)
        {
            break;
        }
        mod = n%2;
        n = n/2;

        if(mod == 0)
        {
            bArray[i] = '0';
        }
        else
        {
            bArray[i]= '1';
        }
    }
    return bArray;
}

int main()
{
    int clearArr;
    long uNum;


    while(scanf("%ld", &uNum) != EOF)
    {
        if(uNum <= 0)
        {
            break;
        }
        int j, k=0, l=0, m, n, counter = 0;
        char* bString = makeBinary(uNum);
        while(bString[k] != '\0')
        {
            l++;
            k++;
        }
        for(m=0, n=l-1; m<l, n>=0; m++, n--)
        {
            cString[m]= bString[n];
        }


        for(j=0; j<SIZE; j++)
        {
            if(bString[j]=='1')
            {
                counter++;
            }
        }


        printf("The parity of %s is %d (mod 2).\n", cString, counter);

        for(clearArr = 0; clearArr<SIZE; clearArr++)
        {
            bArray[clearArr] = '\0';
            cString[clearArr] = '\0';
        }
    }


    return 0;
}
