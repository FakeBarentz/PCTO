#include <stdio.h>
#include <math.h>

int docente()
{
    char selezione = '0';
    
    while(selezione == '0')
    {
                
        printf("\nHai riscontrato qualche problema nei tuoi alunni?\n1) Si\n2) No\n\n");
        scanf(" %c", &selezione);
        
        if(selezione == '1')
        {   char selezione2 = '0';
            
            while(selezione2 == '0')
            {
                printf("\nSeleziona una delle seguenti problematiche:\n1) Disturbo dell'attenzione\n2) Poco interesse nella lezione\n3) Comportamento non consono alla lezione\n\n");
                scanf(" %c", &selezione2);

                if(selezione2 == '1')
                {
                    printf("test\n");        
                }
                else if (selezione2 == '2')
                {
                    printf("ciao\n");
                }
                else if(selezione2 == '3')
                {
                    printf("Boo\n");
                }   
                else
                {
                    printf("\nERRORE: Opzione non valida\n");
                    selezione2 = '0';
                }             
            } 
        }
        else if (selezione == '2')
        {
            printf("\nSeriamente? Non ci credo nemmeno se mi paghi un bitcoin...\n");
        }
        else 
        {
            printf("\nERRORE: Opzione non valida\n");
            docente();
        }
    }

}

int studente()
{
    float x;
    float y;
    float operatore;
    float quadrato;
    char selezione = '0';  
    while(selezione == '0')
    {
        printf("\nHai riscontrato qualche problema durante la lezione?\n 1) Si\n 2) No\n\n");
        scanf(" %c", &selezione); 

        if(selezione == '1')
        {
            char selezione2 = '0';
            
            while(selezione2 == '0')
            {   
                printf("\nCome possiamo esserti utili:\n1) Non riesci a capire bene ciò che il docente sta spiegando?\n2) Hai qualcosa che ti disturba durante l'orario di studio?\n3) Hai problemi con i numeri? Non riesci ad eseguire un calcolo? \n\n");
                scanf(" %c", &selezione2);

                if(selezione2 == '1')
                {
                    printf("\nProva a prendere dei buoni appunti e a fare domande per chiarire i dubbi durante la lezione.\nIn caso tu non abbia ancora compreso, chiedi al docente di avere un piccolo colloquio privato in modo tale da chiarire il tutto.\n");        
                }
                else if (selezione2 == '2')
                {
                    printf("\nIdentifica cosa ti disturba e cerca soluzioni pratiche, come utilizzare cuffie per ridurre il rumore o trovare un posto più tranquillo.\nSpegni ogni contatto con internet e usalo esclusivamente solo per ricerche oppure per ulteriori informazioni.\n");
                }
                else if(selezione2 == '3')
                {
                    printf("\nScegli l'operazione che desideri svolgere:\n");
                    printf("\n1) Somma\n");
                    printf("2) Sottrazione\n");
                    printf("3) Moltiplicazione\n");
                    printf("4) Divisione\n");//(DA AGGIUSTARE:NON FA I CALCOLI NEGATIVI)
                    printf("5) Quadrato di un numero\n");
                    printf("6) Radice di un numero\n\n");
                    scanf("%f", &operatore);
                    
                    
                    if(operatore == 1)
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x + y));
                    }
                    else if(operatore == 2)
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x - y));
                    }
                    else if(operatore == 3)
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x * y));
                    }
                    else if(operatore == 4)
                    {
                        printf("\nScegli il primo numero: ");
                        scanf("%f", &x);
                        printf("Scegli il secondo numero: ");
                        scanf("%f", &y);
                        printf("\nIl risultato è: %.2f\n", (x / y));
                    }
                    else if(operatore == 5)
                    {
                        printf("\nInserisci un numero: ");
                        scanf("%f", &x);
                        quadrato = x * x;
                        printf("Il cubo di %2.f è: %.2f\n", x, quadrato);
                    }
                    else if(operatore == 6)
                    {
                        printf("\nInserisci un numero: ");
                        scanf("%f", &x);
                        sqrt(x);
                        printf("La radice di %.2f è: %.2f\n", x, sqrt(x));
                    }

                }   
                else
                {
                    printf("\nERRORE: Opzione non valida\n");
                    selezione2 = '0';
                }             
        
            }
        }
        else if(selezione == '2')
        {
            printf("\nCosa ci fai qui allora...?\n");
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            studente();
        }

    }
}


int main()
{
    char selezione = '0';

    while(selezione == '0')
    {
        printf("\nBenvenuto in EduData, seleziona un'opzione:\n1) Insegnante\n2) Studente\n\n");
        scanf(" %c", &selezione);      
        if(selezione == '1')
        {
            docente();
        }
        else if (selezione == '2')
        {
            studente();
        }
        else
        {
            printf("\nERRORE: Opzione non valida\n");
            selezione = '0';
        }
    }  
}