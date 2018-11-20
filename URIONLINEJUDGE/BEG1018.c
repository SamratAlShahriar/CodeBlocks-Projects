#include<stdio.h>


int main()
{

    int money;

    while(scanf("%d", &money) != EOF)
    {
        int original = money;
        int  note100=0, note50=0, note20=0, note10=0, note5=0, note2=0, note1=0;

        if(money >= 100)
        {
            note100 = money / 100;
            money %= 100;
        }
        if(money >= 50)
        {
            note50 = money / 50;
            money %= 50;
        }
        if(money >= 20)
        {
            note20 = money / 20;
            money %= 20;
        }
        if(money >= 10)
        {
            note10 = money /10;
            money %= 10;
        }
        if(money >= 5)
        {
            note5 = money / 5;
            money %= 5;
        }
        if(money >= 2)
        {
            note2 = money /2;
            money %= 2;
        }
        if(money >= 1)
        {
            note1 = money / 1;
            money %= 1;
        }

        printf("%d\n", original);
        printf("%d nota(s) de R$ 100,00\n", note100);
        printf("%d nota(s) de R$ 50,00\n", note50);
        printf("%d nota(s) de R$ 20,00\n", note20);
        printf("%d nota(s) de R$ 10,00\n", note10);
        printf("%d nota(s) de R$ 5,00\n", note5);
        printf("%d nota(s) de R$ 2,00\n", note2);
        printf("%d nota(s) de R$ 1,00\n", note1);

    }

    return 0;
}


