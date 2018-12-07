#include<stdio.h>
long int doFact(int mNum);

int main()
{
    int input;
    scanf("%d", &input);
    printf("%d", doFact(input));
    return 0;
}

 long int doFact(int mNum)
{
    if(mNum>1)
    {
        return mNum*doFact(mNum - 1);
    }
    else
    {
        return 1;
    }

}
