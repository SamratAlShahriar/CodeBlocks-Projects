#include<stdio.h>


int main()
{
    int a, b, c, d;

    while(scanf("%d%d%d%d", &a, &b, &c, &d) != EOF)
    {
        int ok = 1;
        if(b>c && d>a)
        {
            if((c+d)>(a+b))
            {

                if(c>0 && d>0)
                {
                    if(a%2==0)
                    {
                        printf("Valores aceitos\n");
                        ok = 0;
                    }
                }
            }
        }

        if(ok)
        {
            printf("Valores nao aceitos\n");
        }

    }


    return 0;
}
