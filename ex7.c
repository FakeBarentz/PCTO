#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int multiplo;
    printf("Scrivi un numero: ");
    scanf("%d", &n1);
    printf("Scrivi un multiplo: ");
    scanf("%d", &n2);
    multiplo = n1%n2;

    if (multiplo!=1)
    {
        printf("E' un multiplo\n");
    }
    else
    {
        printf("Non è un multiplo\n");
    }

    return(0);
}