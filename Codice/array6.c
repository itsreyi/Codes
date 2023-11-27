#include <stdio.h>
#define DIM 10

int main()
{
    int Grandezza = 0;
    int a[DIM];
    int i;
    int n = 1;

    int min = 99;
    int max = -1;

    int ContF1;
    int ContF2;
    int numeroF;

    for (i = 0; i < DIM; i++)
    {
        printf("Inserire un nuemro: ");
        scanf("%d", &a[i]);
        printf("\n");

        Grandezza++;

        if (a[i] < 0)
        {
            break;
        }
    }

    for (i = 0; i < Grandezza - 1; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    for (i = 0; i < Grandezza - 1; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

    for (i = 0 ; i < Grandezza - 1; i++)
    {
        numeroF = a[i];
        for (i = 0; i < Grandezza - 1; i++)
        {
            if(numeroF == a[i])
            {
                ContF1++;
            }

            
        }

        if(ContF1)
    }
}