#include<stdio.h>


int main()
{

    double money;

    while(scanf("%lf", &money) != EOF)
    {
        int taka = (int) money;
        int paisa = (money - taka) * 100;

        int note100=0, note50=0, note20=0, note10=0, note5=0, note2=0;
        int paisa100 = 0, paisa50 = 0, paisa25 = 0, paisa10 = 0, paisa05 = 0, paisa01 = 0;


        if(taka >= 100)
        {
            note100 = taka / 100;
            taka %= 100;
        }
        if(taka >= 50)
        {
            note50 = taka / 50;
            taka %= 50;
        }
        if(taka >= 20)
        {
            note20 = taka / 20;
            taka %= 20;
        }
        if(taka >= 10)
        {
            note10 = taka /10;
            taka %= 10;
        }
        if(taka >= 5)
        {
            note5 = taka / 5;
            taka %= 5;
        }
        if(taka >= 2)
        {
            note2 = taka /2;
            taka %= 2;
        }

        //for paisa

        if(taka >= 1)
        {
            paisa100 = taka / 1;
            taka %= 1;
        }
        if(paisa >= 50)
        {
            paisa50 = paisa / 50;
            paisa %= 50;
        }
        if(paisa >= 25)
        {
            paisa25 = paisa / 25;
            paisa %= 25;
        }
        if(paisa >= 10)
        {
            paisa10 = paisa /10;
            paisa %= 10;
        }
        if(paisa >= 5)
        {
            paisa05 = paisa / 5;
            paisa %= 5;
        }
        if(paisa >= 1)
        {
            paisa01 = paisa /1;
            paisa %= 1;
        }



        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n", note100);
        printf("%d nota(s) de R$ 50.00\n", note50);
        printf("%d nota(s) de R$ 20.00\n", note20);
        printf("%d nota(s) de R$ 10.00\n", note10);
        printf("%d nota(s) de R$ 5.00\n", note5);
        printf("%d nota(s) de R$ 2.00\n", note2);


        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n", paisa100);
        printf("%d moeda(s) de R$ 0.50\n", paisa50);
        printf("%d moeda(s) de R$ 0.25\n", paisa25);
        printf("%d moeda(s) de R$ 0.10\n", paisa10);
        printf("%d moeda(s) de R$ 0.05\n", paisa05);
        printf("%d moeda(s) de R$ 0.01\n", paisa01);
    }

    return 0;
}


