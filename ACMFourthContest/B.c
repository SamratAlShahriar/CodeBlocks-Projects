#include<stdio.h>

//not ok
int main(){

while(1){
    long long int n;
    long i;
    scanf("%lld", &n);
    if(n<=0){
        break;
    }

    for(i = 2; i * i < n; i++){
        while(n%i == 0){
            printf("    %ld\n", i);
            n /= i;
        }
        if(n>1){
            printf("    %ld\n");
        }
        printf("\n");
    }
}

return 0;}
