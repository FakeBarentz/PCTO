#include <stdio.h>

int perimetro(int a, int b, int c)
{
    int perimetro;

    perimetro = a+b+c;

    return(perimetro);
}

int main()
{
    int x;
    int y;
    int z;
    int p;

    printf("Inserisci 3 misure\n");
    printf("Prima misura: ");
    scanf("%d", &x);
    printf("Seconda misura: ");
    scanf("%d", &y);
    printf("Terza misura:");
    scanf("%d", &z);
    
    p = perimetro;
    printf("Il perimetro sarà di: %d", p);

    return 0;
}