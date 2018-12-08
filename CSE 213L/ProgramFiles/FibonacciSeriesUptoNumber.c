#include<stdio.h>

/*
* author Samrat Al Shahriar
*/



int main(){
int n, num1 = 0, num2 = 1, fibNum = 0;

printf("Enter the fibonacci series upto : ");

scanf("%d", &n);

while(fibNum<=n){
    printf("%d ", fibNum);
    num1=num2;
    num2=fibNum;
    fibNum = num1+num2;
}

return 0;}
