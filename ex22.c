#include <stdio.h>

void tuMadre()
{
    int x;
    int y;
    int somma;
    int sottrazione;
    int moltiplicazione;
    int divisione;

    printf("Scegli l'operazione (+,-,*,/) ed inserisci 2 numeri: ");
    scanf("%d", &x);
    scanf("%d", &y);

    if('+')
    {
        printf("Il risultato è: %d\n", somma);
        somma = x+y;
    }
    else if('-')
    {
        printf("Il risultato è: %d\n", sottrazione);
        sottrazione = x-y;
    }
    else if('*')
    {
        printf("Il risultato è: %d\n", moltiplicazione);
        moltiplicazione = x*y;
    }
    else if('/')
    {
        printf("Il risultato è: %d\n", divisione);
        divisione = x/y;
    }
}

int main()
{
    tuMadre();
}