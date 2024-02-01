#include <stdio.h>

void calcolatrice()
{
    int x;
    int y;
    int operatore;

        printf("Scegli il primo numero: ");
        scanf("%d", &x);
        printf("Scegli il secondo numero: ");
        scanf("%d", &y);
        printf("Scegli l'operazione che desideri svolgere:\n");
        printf("1 per +\n");
        printf("2 per -\n");
        printf("3 per *\n");
        printf("4 per /\n");
        scanf("%d", &operatore);


    if(operatore == 1)
    {
        printf("Il risultato è: %d\n", (x + y));
    }
    else if(operatore == 2)
    {
        printf("Il risultato è: %d\n", (x - y));
    }
    else if(operatore == 3)
    {
        printf("Il risultato è: %d\n", (x * y));
    }
    else if(operatore == 4)
    {
        printf("Il risultato è: %d\n", (x / y));
    }
}

int main()
{
    calcolatrice();
    return 0;
}