#include<stdio.h>


int main(){

int n, i, j, k, l, temp;
scanf("%d", &n);
int arr[n];
for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
}

for(j=1; j<=n-1; j++){
    k=j;
    while(k>0 && arr[k-1] > arr[k]){
        temp = arr[k];
        arr[k] = arr[k-1];
        arr[k-1] = temp;
        k--;
    }
}

for(l=0; l<n; l++){
    printf("%d ", arr[l]);
}




return 0;}
