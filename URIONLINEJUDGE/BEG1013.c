#include<stdio.h>

int main(){

int a, b, c;

while(scanf("%d%d%d", &a, &b, &c) != EOF){
 int maior;

 maior = (a+b+abs(a-b))/2;
 maior = (maior+c+abs(maior-c))/2;
 printf("%d eh o maior\n", maior);
}

return 0;}
