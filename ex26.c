#include <stdio.h>
void pariEdispari()
{
    int a;
    printf("Inserisci un numero: ");
    scanf("%d", &a);

    if (a%2==0)
    {
        printf("%d è pari\n", a);
    }
    else
    {
        printf("%d è dispari\n", a);
    }

}

int main()
{
    pariEdispari();
    return 0;
}