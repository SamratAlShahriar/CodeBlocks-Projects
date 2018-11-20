#include<stdio.h>

int getMax(int ar[], int i, int l)
{
    int max;
    if(i==l)
    {
        return ar[i];
    }
    else
    {
        max = getMax(ar, i+1, l);
        return ar[i] >= max ? ar[i]:max;
    }

}

int main()
{
    int s;
    scanf("%d", &s);
    if(s>0)
    {
        int arr[s];
        for(int i = 0; i<s; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("%d", getMax(arr, 0, s-1));
    }
    return 0;
}
