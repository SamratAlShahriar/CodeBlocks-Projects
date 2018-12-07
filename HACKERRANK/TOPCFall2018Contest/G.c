#include<stdio.h>


int main()
{
    int T, i;
    scanf("%d", &T);
    for(i=1; i<=T; i++)
    {

        int j, count=0;
        char A[100000];
        scanf("%s", A);
        while(A[count]!='\0')
        {
            count++;
        }

        if(A[count-1]=='1')
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
