#include<stdio.h>


int main(){

double X1, X2, Y1, Y2;
scanf("%lf%lf%lf%lf", &X1, &Y1, &X2, &Y2);
printf("%.2lf\n", sqrt(((X2-X1)*(X2-X1))+((Y2-Y1)*(Y2-Y1))));

return 0;

}
