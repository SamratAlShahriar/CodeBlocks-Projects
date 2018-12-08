#include<stdio.h>

void merge(int arr[], int start, int center, int end)
{
    int i, j, k;
    int m = center - start + 1;
    int n = end - center;

    int A[m], B[n];

    for(i=0; i < m; i++)
    {
        A[i] = arr[start+i];
    }
    for(j=0; j < n; j++)
    {
        B[j] = arr[center + 1 + j];
    }
    i=0;
    j=0;
    k=start;
    while(i < m && j < n)
    {
        if(A[i] <= B[j])
        {
            arr[k] = A[i];
            i++;
        }
        else
        {
            arr[k] = B[j];
            j++;
        }
        k++;
    }

    while(i < m){
        arr[k] = A[i];
        i++;
        k++;
    }
    while(j < n){
        arr[k] = B[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int center = (start+end)/2;
        mergeSort(arr, start, center);
        mergeSort(arr, center+1, end);

        merge(arr, start, center, end);
    }
}

void printArr(int a[], int size){
    int i;
    for(i=0; i<size; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int s, start = 0, end;
    int arr[] = {18, 2, 1, 5, 11, 57, 5};
    s = sizeof(arr)/sizeof(arr[0]);
    end = s - 1;

    printf("My Id: ");
    printArr(arr, s);

    mergeSort(arr, start, end);

    printf("After Sort: ");
    printArr(arr, s);


    return 0;
}
