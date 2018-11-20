#include<stdio.h>

int main()
{
    int mStart, mEnd, mDiff, sum = 0;

    scanf("%d%d%d", &mStart, &mEnd, &mDiff);

    for(int n = mStart; n <= mEnd; n = n + mDiff)
    {
        sum = sum + n;
    }
    printf("%d", sum);

    return 0;
}
