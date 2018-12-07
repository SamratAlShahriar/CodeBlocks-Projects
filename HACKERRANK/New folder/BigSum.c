#include<stdio.h>


int main(){
    int T;
    scanf("%d", &T);

    long long int SUM = 0;
    while(T--){
        long long int TempNum;
        scanf("%lld", &TempNum);
        SUM+=TempNum;
    }
    printf("%lld\n", SUM);

return 0;
}
