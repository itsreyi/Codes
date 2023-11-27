#include <stdio.h>

int main()
{
    struct orario
    {
        int ore, minuti;
    } orario[2];

    struct orario differenza;

    printf("Inserisci il primo orario: ");
    scanf("%d %d", &orario[0].ore, &orario[0].minuti);
    printf("\n");

    printf("Inserisci il primo orario: ");
    scanf("%d %d", &orario[1].ore, &orario[1].minuti);
    printf("\n");

    differenza.ore = orario[1].ore - orario[0].ore;
    differenza.minuti = orario[1].minuti - orario[0].minuti;

    printf("Differenza tra i due orari: %d:%d", differenza.ore, differenza.minuti);

    if (differenza.minuti <= 0)
    {
        differenza.ore--;
        differenza.minuti += 60;
    }

    return 0;
}