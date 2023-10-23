#include <stdio.h>

int main()
{
    int Numero, Esponente=0, Fattorizzazione;
    printf("Inserisic un numero: ");
    scanf("%d", &Numero);
    printf("\n");

    for (int i = 2; Fattorizzazione!=1;)
    {
        if (Numero % i == 0)
        {
            Esponente++;
            Fattorizzazione = Numero / i;
            printf("%d^%d\n", i, Esponente);
        }
        else
        {
            i++;
        }
    }
}