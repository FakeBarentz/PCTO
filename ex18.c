#include <stdio.h>

int main()
{
	int y, x;
    float media, somma; 
    y=0; 
    somma = 0;

	while(x>=0)
	{
        printf("Inserisci un numero: ");
        scanf("%d", &x);
        if (x>=0)
        {
            y=y+1;
            somma = somma+x;
            media = somma/y;
            printf("%f", media);
        }
        else
        {
            break;
        }
    }
    return(0);
}