#include <stdio.h>

int main() {

 char name[1000];
 double sal, sel,  to;

 scanf("%s%lf%lf", name, &sal, &sel);
 to = (sal + (sel * 0.15));
 printf("TOTAL = R$ %.2lf\n", to);
    return 0;
}
