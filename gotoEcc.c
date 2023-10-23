#include <stdio.h>

int main()
{
    int numero, somma = 0;
    while (1)
    {
        scanf("%d", &numero);
        if (numero < 0)
            goto fine;     // puoi usare break al posto del goto

        somma += numero;
    }
fine:

    printf("Somma: %d", somma);

    return 0;
}