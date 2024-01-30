#include <stdio.h>

int main()
{
    int eta;
    int patente;
    printf("A quanti anni puoi prendere la patente nel tuo Stato? ");
    scanf("%d", &patente);
    printf("Quanti anni hai?");
    scanf("%d", &eta);

    if (eta>=patente)
    {
        printf("Puoi avere la patente nel tuo Stato");
    }
    else
    {
        printf("Non puoi avere la patente nel tuo Stato");
    }
   return(0);
}