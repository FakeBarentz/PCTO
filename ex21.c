#include <stdio.h>

void funzione()
{
    char c; 
    printf("Scegli una lettera: ");
    scanf("%c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("%c è una vocale\n", c);
    }
    else if(c=='b' || c=='c' || c=='d' || c=='f' || c=='g' || c=='l' || c=='m' || c=='n' || c=='p' || c=='q' || c=='r' || c=='s' || c=='t' || c=='v'|| c=='z')
    {
        printf("%c è una consonante\n", c);
    }
    
}

int main()
{
    funzione();
    return 0;
}