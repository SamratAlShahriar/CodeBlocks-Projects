#include<stdio.h>


int main(){
int productCode1, productCode2, qty1, qty2;
double unitPrice1, unitPrice2;

while(scanf("%d%d%lf%d%d%lf", &productCode1, &qty1, &unitPrice1, &productCode2, &qty2, &unitPrice2) != EOF){
        double payFor1 = qty1 * unitPrice1;
        double payFor2 = qty2 * unitPrice2;
        double totalPay = payFor1 + payFor2;
        printf("VALOR A PAGAR: R$ %.2lf\n", totalPay);
}

return 0;}
