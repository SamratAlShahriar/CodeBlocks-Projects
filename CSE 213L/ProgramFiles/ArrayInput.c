#include<stdio.h>
#define SIZE 5

/**
*    @author
*     Samrat Al Shahriar
*/

int main()
{
    int a[SIZE], i;

    printf("Enter the value to store in a array : ");
    for(i = 0; i<SIZE; i++){
        scanf("%d", &a[i]);
    }
    printf("Inputed numbers are : \n");
    for(i = 0; i<SIZE; i++){
        printf("%d ", a[i]);
    }
    return 0;
}
