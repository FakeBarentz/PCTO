#include <stdio.h>
int main()
{
    int x;
    int risultato = 1;
    printf("Inserisci un numero: ");
    scanf("%d", &x);
    while(x>0)
    {
        risultato = risultato*x;
        x = x-1;
    }
    printf("%d\n", risultato);
    return(0);

}