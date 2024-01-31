#include <stdio.h>

int main()
{
    int x=5; 
    int y;
    int z;
    float sc=0;
    
    while(x > 0)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &y);
        int z=y*x;
        if(y>1 && y<30)
        {
            printf("Il totale da pagare è %d\n", z);
        }
        else if (y>=30 && y < 50)
        {
           sc = (z * 0.9);
           printf("Il totale è %.2f\n", sc);
        } 
        else if(y>=50)
        {
            sc = z * 0.85;
            printf("Il totale è: %.2f\n", sc);
        }
    }
}