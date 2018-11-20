#include<stdio.h>
#define SIZE 9

//not ok

void swapChar(char *m, char *n)
{
    char temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

void reArrange(char *st, int b, int e)
{
    int j;
    if(b==e)
    {
        printf("%s\n", st);
    }
    else
    {
        for(j = b; j<=e; j++)
        {
            swapChar((st+b), (st+j));
            reArrange(st, b+1, e);
            swapChar((st+b), (st+j));
        }
    }
}


int main()
{
    char str[SIZE];

    while(scanf("%s", &str) != EOF)
    {
        int i, tSize = 0;
        for(i=0; i<SIZE; i++)
        {
            if(str[i] == '\0')
            {
                break;
            }
            else
            {
                tSize++;
            }
        }

        reArrange(str, 0, tSize-1);
    }


    return 0;
}
