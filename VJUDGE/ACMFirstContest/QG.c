#include<stdio.h>


int main()
{
    int mCounter = 0, i, j;

    char mStr[10000];


    scanf("%[^\n]s", mStr);

    for(i = 0; mStr[i] != '\0'; i++){
        if(mStr[i] == ' ' && mStr[i+1] != '.'){
            mCounter++;
        }
    }
    printf("%d", mCounter+1);

    return 0;
}
