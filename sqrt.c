#include<math.h>
#include<stdio.h>


int main()
{
    double a, b, c;
    scanf("%lf", &c);

    a = sqrt(c);
    b = pow(c,c);


    printf("squareroot of %.lf : %.2lf\n", c, a);
    printf("power square of %.lf : %.2lf", c, b);

    return 0;
}
