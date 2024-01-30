#include <stdio.h>

int main()
{
    int tempC;
    int tempF;
    float tempK;
    printf("Inserisci la temperatura in C: ");
    scanf("%d", &tempC);

    if (tempC<=-273.15)
    {
        printf("Temperatura invalida");
    }
    else
    {
        tempC = (tempC/5)*9;
        tempF = (tempC+32);
        tempK = (tempC+273.15);
        printf("Temperatura in tempF è uguale a: %d\n", tempF);
        printf("Temperatura in tempF è uguale a: %.2f\n", tempK);
    }
    return(0);
}