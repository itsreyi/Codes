#include <stdio.h>

int main()
{
    int n, i;
    int x;
    int Somma;

    printf("Quanti numeri vuoi sommare? ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        printf("Inserisci il %d^ numero:", i);
        scanf("%d", &x);
        printf("\n");
        
        Somma = Somma + x;
    }

    printf("Somma: %d\n", Somma);
}
