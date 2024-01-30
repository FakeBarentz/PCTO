#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;
    
    printf("Scegli 3 numeri:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    
    if (n1 + n2 > n3 && n1 + n3 > n2 && n2 + n3 > n1)
    {
        printf("E' un triangolo\n");
    }
    else
    {
        printf("Non è un triangolo\n");
    }
    return(0);
}