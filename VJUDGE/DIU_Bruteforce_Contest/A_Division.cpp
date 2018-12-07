#include<bits/stdc++.h>

using namespace std;

bool check(int f[], int s[])
{
    for(int I=0; I<5; I++)
    {
        for(int J=0; J<5; J++)
        {
            if(f[I]==s[J])
                return false;

            if(I != J && s[I]==s[J])
                return false;
        }
    }
    return true;
}

int main()
{
    bool nonFirst=false;
    while(true)
    {
        bool have = false;
        int N, i, j, k, l, m;

        cin >> N;
        if(N==0)
        {
            break;
        }

        if(nonFirst)
        {
            printf("\n");
        }
        nonFirst = true;

        for(i = 1; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                if(j==i)
                    continue;
                for(k=0; k<10; k++)
                {
                    if(k==j || k==i)
                        continue;
                    for(l=0; l<10; l++)
                    {
                        if(l==k || l==j || l==i)
                            continue;
                        for(m=0; m<10; m++)
                        {
                            if(m==l || m==k || m==j || m==i)
                                continue;
                            int major = (i*10000)+(j*1000)+(k*100)+(l*10)+m;
                            int minor=0;
                            if(major%N==0)
                            {
                                minor = major/N;
                            }

                            if(minor!=0 && minor>1000)
                            {
                                int c = minor;
                                int x = 0;
                                int arr[10];
                                while(c)
                                {
                                    arr[x++]=c%10;
                                    c/=10;
                                }

                                if(x==4 && minor<10000)
                                {
                                    arr[x]=0;
                                }
                                int mar[] = {i, j, k, l, m};


                                if(check(mar, arr))
                                {
                                    printf("%d / %05d = %d\n", major, minor, N);
                                    have=true;

                                }

                            }

                        }
                    }
                }
            }
        }

        if(!have)
            printf("There are no solutions for %d.\n", N);
    }


    return 0;
}
