#include <stdio.h>

int main()
{
    int Dividendo, Divisore;
    int a, q=0;

    printf("Dividendo: ");
    scanf("%d", &Dividendo);
    printf("\n");
    printf("Divisore: ");
    scanf("%d", &Divisore);
    printf("\n");

    a = Dividendo;

    while (a >= Divisore)
    {
        a = a - Divisore;
        q++;
    }

    printf("Il resto e': %d\n", a);
    printf("Quoziente: %d\n", q);
}