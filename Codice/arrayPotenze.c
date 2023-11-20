#include <stdio.h>
#define DimF 100

int main()
{
    int DimL;

    int array1[DimF];
    int array2[DimF];

    do
    {
        printf("Quanti valori vuoi assegnare all' array? (MAX 100): ");
        scanf("%d", &DimL);
        if (DimL <= 0 || DimL > DimF)
        {
            printf("[!] L' input inserito non e' valido [!]\n");
        }
    } while (DimL <= 0 || DimL > DimF);

    for (int i = 0; i < DimL; i++)
    {
        do
        {
            printf("%d. Inserire un numero: ", i + 1);
            scanf("%d", &array1[i]);

            if (array1[i] == 0)
            {
                printf("[!] L' input inserito non e' valido [!]\n");
            }
            else
            {
                if (array1[i] % 2 == 0)
                {
                    array2[i] = array1[i] * array1[i];
                }
                else if (array1[i] % 2 == 1)
                {
                    array2[i] = array1[i] * array1[i] * array1[i];
                }
            }

        } while (array1[i] == 0);
    }

    printf("Array1: ");
    for(int i=0; i<DimL; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Array2: ");
    for(int i=0; i<DimL; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

}