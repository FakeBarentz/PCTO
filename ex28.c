#include <stdio.h>
int fattoriale(int x)
{
    int risultato = 1;
    while(x>0)
    {
        risultato = risultato*x;
        x = x-1;
    }
    return(risultato);

}

int main()
{
    int a;
    printf("Inserisci un numero: ");
    scanf("%d", &a);
    printf("Risultato: %d\n", fattoriale(a));
    return 0;
}