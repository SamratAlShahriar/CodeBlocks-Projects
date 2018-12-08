#include<stdio.h>

/**
    author Samrat Al Shahriar
*/


void swap(int* pIndex, int* i)
{
    int temp = *pIndex;
    *pIndex = *i;
    *i = temp;
}

int partition(int arr[], int start, int end)
{
    int pivot =  arr[end];
    int pIndex = start;

    for(int i = start; i<end; i++)
    {
        if(arr[i] <= pivot)
        {
            swap(&arr[pIndex], &arr[i]);
            pIndex++;
        }
    }

    swap(&arr[pIndex], &arr[end]);
    return pIndex;

}


void quickSort(int arr[], int start, int end)
{
    if(start < end)
    {
        int pIndex = partition(arr, start, end);

        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

void printArr(int arr[], int size)
{
    int j;
    for(j=0; j<size; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\n");
}

int main()
{
    int s, start = 0, end;
    int arr[] = {18, 2, 1, 5, 11, 57, 5};

    s = sizeof(arr)/sizeof(arr[0]);
    end = s -1;

    printf("My Id: ");
    printArr(arr, s);

    quickSort(arr, start, end);

    printf("After Sort: ");
    printArr(arr, s);
    return 0;
}
