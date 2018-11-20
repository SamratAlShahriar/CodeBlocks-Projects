#include<stdio.h>

int main(){

double a, b, c;

while(scanf("%lf%lf%lf", &a, &b, &c) != EOF){
    double triArea = 0.5 * a * c;
    double cirArea = 3.14159 * c * c;
    double trapArea = ((a+b) * c)/2.0;
    double sqrArea = b * b;
    double rectArea = a * b;

    printf("TRIANGULO: %.3lf\n", triArea);
    printf("CIRCULO: %.3lf\n", cirArea);
    printf("TRAPEZIO: %.3lf\n", trapArea);
    printf("QUADRADO: %.3lf\n", sqrArea);
    printf("RETANGULO: %.3lf\n", rectArea);
}

return 0;}
