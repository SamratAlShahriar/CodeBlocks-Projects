#include <stdio.h>
#include<math.h>



int main()
{
    int inNo, uNo, charVal, res;
    char uStr[4];
    scanf("%d", &inNo);
    while(inNo--)
    {
        scanf("%3s-%d", uStr, &uNo);

        charVal=(26*26*(uStr[0]-'A'))+(26*(uStr[1]-'A'))+(uStr[2]-'A');

        res = abs(charVal-uNo);
        res <= 100 ? printf("nice\n"): printf("not nice\n");
    }

    return 0;
}
