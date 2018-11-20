#include<stdio.h>

int main()
{
    int aSize, i;
    scanf("%d", &aSize);
    if(aSize > 0)
    {
        int aVal[aSize];
        for(i = 0; i<aSize; i++)
        {
            scanf("%d", &aVal[i]);
        }
        revArray(aVal, aSize);
    }
    return 0;
}

void revArray(int arr[], int s)
{
    int index;
    if(s>0)
    {
        index = s - 1;
        if(s == 1)
        {
            printf("%d", arr[index]);
        }
        else
        {
            printf("%d ", arr[index]);
        }
        revArray(arr, index);
    }
}
