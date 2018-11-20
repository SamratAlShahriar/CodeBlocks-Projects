#include<stdio.h>
#define MILEAGE 12.0


int main()
{

    int time, speed;

    while(scanf("%d%d", &time, &speed) != EOF)
    {
        double fuel = (time * speed) / MILEAGE;
        printf("%.3lf\n", fuel);
    }

    return 0;
}

