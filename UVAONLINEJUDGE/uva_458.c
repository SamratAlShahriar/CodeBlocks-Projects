#include<stdio.h>


int main()
{
    int i;
    char ch;
    char str[1000];

    while(scanf("%s", str) != EOF)
    {
        int size = 0;
        while(str[size]!='\0'){
            size++;
        }
        for(i=0; i<size; i++)
        {
            printf("%c", str[i]-7);
        }
        printf("\n");
    }

    return 0;
}
