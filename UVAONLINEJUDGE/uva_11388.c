#include<stdio.h>


int main()
{
    int n, i;
    scanf("%d", &n);

    while(n--){
        int G, L;
        scanf("%d%d", &G, &L);

        if(L%G != 0)
            printf("-1\n");
        else
            printf("%d %d\n", G, L);
    }

    return 0;
}
