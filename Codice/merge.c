#include <stdio.h>
#define DimF 100

int main()
{
    int DimL1, DimL2;

    int array1[DimF];
    int array2[DimF];

    int temp;
    int pos = 0;

    do
    {
        printf("Quanti valori vuoi assegnare all' array1? (MAX 100): ");
        scanf("%d", &DimL1);
        if (DimL1 <= 0 || DimL1 > DimF)
        {
            printf("[!] L' input inserito non e' valido [!]\n");
        }
    } while (DimL1 <= 0 || DimL1 > DimF);

    do
    {
        printf("Quanti valori vuoi assegnare all' array2? (MAX 100): ");
        scanf("%d", &DimL2);
        if (DimL2 <= 0 || DimL2 > DimF)
        {
            printf("[!] L' input inserito non e' valido [!]\n");
        }
    } while (DimL2 <= 0 || DimL2 > DimF);

    for (int i = 0; i < DimL1; i++)
    {
        pos = 0;

        printf("(Array1)%d. Inserire un numero: ", i + 1);
        scanf("%d", &array1[i]);
        pos++;

        if (i != 0)
        {
            for (int j = 0; j < pos; j++)
            {
                if (array1[j] > array1[i])
                {
                    temp = array1[j];
                    array1[j] = array1[i];
                    array1[i] = temp;
                }
            }
        }
    }
    printf("\n");

    for (int i = 0; i < DimL2; i++)
    {

        pos = 0;

        printf("(Array2)%d. Inserire un numero: ", i + 1);
        scanf("%d", &array2[i]);
        pos++;

        if (i != 0)
        {
            for (int j = 0; j < pos; j++)
            {
                if (array2[j] > array2[i])
                {
                    temp = array2[j];
                    array2[j] = array2[i];
                    array2[i] = temp;
                }
            }
        }
    }
    printf("\n");

    int mergedArray[DimF];
    int mergedSize = DimL1 + DimL2;
    int i = 0, j = 0, k = 0;

    while (i < DimL1 && j < DimL2)
    {
        if (array1[i] < array2[j])
        {
            mergedArray[k] = array1[i];
            i++;
        }
        else
        {
            mergedArray[k] = array2[j];
            j++;
        }
        k++;
    }

    while (i < DimL1)
    {
        mergedArray[k] = array1[i];
        i++;
        k++;
    }

    while (j < DimL2)
    {
        mergedArray[k] = array2[j];
        j++;
        k++;
    }

    printf("Merged and sorted array: ");
    for (int i = 0; i < mergedSize; i++)
    {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}