#include <stdio.h>
#include <stdlib.h>
void damiano()
{
    int x = 1;
    int y;
    int r;
    

    while (x>=0)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &x);
        r=rand()%100; //numeri compresi tra 0 e 1 perchè non prende l'ultimo numero
        if(x==r)
        {
            printf("Hai indovinato! Hai ottenuto 1 punto.\n");
        }
        else
        {
            printf("Sbagliato! Il numero corretto era: %d\n", r);
        }
    }
   
}

int main()
{
    damiano();
    return 0;
}