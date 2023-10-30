#include <stdio.h>

int main()
{
    int Fattorizzazione, Esponente=0, Numero;
    unsigned int i;

    printf("Inserisci un numero: ");
    scanf("%d", &Numero);
    printf("\n");

    Fattorizzazione = Numero; 

    for (i = 2; Fattorizzazione > 1;)
    {
        if (Fattorizzazione % i == 0)
        {
            Esponente++;
            Fattorizzazione = Fattorizzazione / i;
        }
        else
        {
            if(Esponente!=0)
            {
                printf("%d^%d\n", i, Esponente);
            }
            Esponente=0;
            i++;
        }
        
    }
    printf("%d^%d\n", i, Esponente);
}
