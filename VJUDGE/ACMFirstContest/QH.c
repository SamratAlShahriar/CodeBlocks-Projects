#include<stdio.h>
#include<string.h>

int main()
{

    int tCase, i, j, k, l;
    char *text;

    char *pat;

    scanf("%d", &tCase);

    while(tCase > 0)
    {
        scanf("%s%s", &text, &pat);

        l = strlen(pat);
        printf("%d", l);
        tCase--;
    }


    return 0;
}
