#include<stdio.h>

int main(){

double dist, fuel;

while(scanf("%lf%lf", &dist, &fuel) != EOF){
 double cons = dist / fuel;
 printf("%.3lf km/l\n", cons);
}

return 0;}
