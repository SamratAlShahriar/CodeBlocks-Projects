#include<stdio.h>


/**
*    @author Samrat Al Shahriar
*/

int main()
{
    while(1)
    {
        int n, reversedNumber = 0, reminder, originalNumber, step=0;

        printf("Enter an Integer number : ");

        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        originalNumber = n;

        while(n!=0)
        {
            //printf("step-%d\n", ++step);
            reminder = n%10;
            reversedNumber = reversedNumber*10 + reminder;

            //printf("\nrev = %d\n", reversedNumber);
           // printf("\nreminder = %d\n", reminder);
            n = n/10;
            //printf("n / 10 =  %d\n", n);
            //printf("\nend step%d\n\n\n", step);
        }


        if(originalNumber == reversedNumber)
        {
            printf("%d is a palindrome number.\n\n", originalNumber);
        }
        else
        {
            printf("%d is not a palindrome number.\n\n", originalNumber);
        }
    }

    return 0;
}
