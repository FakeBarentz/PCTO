#include <stdio.h>
#include <math.h>

int perimetro(int a, int b, int c)
{
    int perimetro;

    perimetro = a+b+c;

    return(perimetro);
}

int area(int a, int b, int c, int p)
{
    int area;

    area = sqrt((p)*(p-a)*(p-b)*(p-c));
}

int main()
{
    int x;
    int y;
    int z;
    int p;
    int a;

    printf("Inserisci 3 misure\n");
    printf("Prima misura: ");
    scanf("%d", &x);
    printf("Seconda misura: ");
    scanf("%d", &y);
    printf("Terza misura:");
    scanf("%d", &z);
    
    p = perimetro(x, y, z);
    printf("Perimetro: %d\n", p);

    a = area(x, y, z, p);
    printf("Area: %d\n", a);

    return 0;
}
