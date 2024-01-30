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
    
    if (n3 - n2 == n2 - n1)
    {
        printf("E' costante\n");
    }
    else
    {
        printf("Non sono costanti\n");
    }
    return(0);
}