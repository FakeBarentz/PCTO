#include <stdio.h>

void massimo()
{
    int x;
    int y;
    printf("Inserisci un numero: ");
    scanf("%d", &x);
    printf("Inserisci un secondo numero: ");
    scanf("%d", &y);

    if (x<y)
    {
        printf("%d è maggiore di %d\n", y, x);
    }
    else
    {
        printf("%d è maggiore di %d\n", x, y);
    }
}

int main()
{
    massimo();
    return 0;
}