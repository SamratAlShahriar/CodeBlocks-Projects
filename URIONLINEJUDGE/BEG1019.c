#include<stdio.h>


int main()
{

    int seconds;

    while(scanf("%d", &seconds) != EOF)
    {
        int second = seconds % 60;
        int minute = (seconds / 60) % 60;
        int hour = seconds / 3600;

        printf("%d:%d:%d\n", hour, minute, second);
    }

    return 0;
}


