#include <stdio.h>

int main()
{
    int anno1;
    int anno2;

    printf("Scegli un anno: ");
    scanf("%d", &anno1);
    if (anno1 == 1969)
    {
        printf("Sei nato nello stesso anno dell'atterraggio sulla Luna\n");
    }
    else
    {
        printf("Non sei nato nello stesso anno dell'atterraggio sulla Luna\n");
    }
    if (anno1 > 1969)
    {
        printf("Sei nato dopo dell'atterraggio sulla Luna\n");
    }
    else
    {
        printf("Non sei nato dopo dell'atterraggio sulla Luna\n");
    }
    if (anno1 < 1969);
    {
        printf("Sei nato prima dell'atterraggio sulla Luna\n");
    }
    else
    {
        printf("Non sei nato prima dell'atterraggio sulla Luna\n");
    }
    return(0);

}