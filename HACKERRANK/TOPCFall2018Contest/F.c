#include<stdio.h>


int main()
{
    int TCASE, i, l;
    scanf("%d", &TCASE);
    for(i=1; i<=TCASE; i++)
    {


        int K, ROW, COLUMN, j, k, count = 0;
        scanf("%d%d%d", &K, &ROW, &COLUMN);
        char A[ROW][COLUMN];
        for(j=0; j<ROW; j++)
        {
            for(k=0; k<COLUMN; k++)
            {
                scanf("\n%c", &A[j][k]);
            }
        }

        for(j=0; j<ROW; j++)
        {
            for(k=0; k<COLUMN; k++)
            {
                if(A[j][k]=='A')count++;
            }
        }

        printf("Case %d: %d\n", i, count*K);
        for(l=1; l<=count*K; l++)printf("Shohomot Vai\n");
    }


    return 0;
}
