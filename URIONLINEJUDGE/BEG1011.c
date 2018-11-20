#include<stdio.h>

#define PI 3.14159

int main()
{
    double radius;

    while(scanf("%lf", &radius) != EOF)
    {
        double volume = (4.0/3) * PI * (radius * radius * radius);
        printf("VOLUME = %.3f\n", volume);
    }
    return 0;
}
