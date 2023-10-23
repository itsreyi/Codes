#include <stdio.h>

int main()
{
    int numero, somma = 0;
    while (1)
    {
        scanf("%d", &numero);
        if (numero < 0)
            break;    //salta il ciclo ed esce da esso

        somma += numero;
    }

    printf("Somma: %d", somma);

    return 0;
}