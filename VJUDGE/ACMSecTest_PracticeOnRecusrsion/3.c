#include<stdio.h>

//not completed

int main(){
    int s, i;
    scanf("%d", &s);
    if(s>0){
    int val[s];
    for(i = 0; i<s; i++){
        scanf("%d", &val[i]);
    }
//     for(i = 0; i<s; i++){
//        printf("%d ", val[i]);
//     }
     remOdd(val, s);
    }
return 0;
}

void remOdd(int arr[], int size){
    if(size<0){return;}
    printf("%d ", arr[size-1]);
    remOdd(arr, size-1);
    if(arr[size-1]%2 != 0){
        arr[size-1] = 0;
    }
    }

