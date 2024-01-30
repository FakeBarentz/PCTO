#include <stdio.h>

int main()
{
	int numero;
    int x = 2;
    int div = 0;

	printf("Inserisci un numero:\n");
    scanf("%d", &numero);

	while(x<numero)
	{
		if(numero % x == 0)
        {
            div = div + 1;
        } 
        x = x + 1;
    }   
    if (div == 0)
    {
        printf("Primo\n");
    }
	else
    {
        printf("Non primo\n");
    }

    return(0);
}