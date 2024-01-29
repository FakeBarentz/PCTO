#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;
    int somma;

    printf("Inserisci l'età di Greta:");
    scanf("%d", &n1);
    printf("Inserisci l'età di Marco:");
    scanf("%d", &n2);
    printf("Inserisci l'età di Lorenzo:");
    scanf("%d", &n3);
    printf("Inserisci l'età di Aurora:");
    scanf("%d", &n4);
    printf("Inserisci l'età di Sofia:");
    scanf("%d", &n5);
    somma = n1 + n2 + n3 + n4 + n5;
    printf("Il tuo risultato è: %d\n", somma);

    return(0);
}