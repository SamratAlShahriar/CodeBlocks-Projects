#include<stdio.h>


int main()
{

    int days;

    while(scanf("%d", &days) != EOF)
    {
        int year = days / 365;
        int month = (days % 365) / 30;
        int day = (days % 365) % 30;


        printf("%d ano(s)\n", year);
        printf("%d mes(es)\n", month);
        printf("%d dia(s)\n", day);
    }

    return 0;
}


