#include<stdio.h>

int main()
{
    int i, numero, somma=0;

    for(i=0; i<5; i++)
    {
        printf("Numero: ");
        scanf("%d", &numero);

        if(numero<0)
        continue;           //salta quello che c'è dopo questa istruzione ma rimane nel ciclo
        somma += numero;
    }

    printf("Somma: %d", somma);

    return 0;
}