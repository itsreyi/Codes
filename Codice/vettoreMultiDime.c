#include<stdio.h>  //Da fixare
#define DimF 10

void lettura(int a[DimF][DimF], int DimL)
{
    int i, j;

    for(i=0; i<DimL-1; i++)
    {
        for(j=0; j<DimL-1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

int simmetrica(int a[DimF][DimF], int DimL)
{
    int i, j;

    for(i=0; i<DimL-1; i++)
    {
        for(j=0; j<DimL-1; j++)
        {
            if(a[i][j]!=a[j][i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{   
    int M[DimF][DimF];
    int DimL;

    do
    {
        printf("Inserisci il numero di righe e colonne: ");
        scanf("%d", &DimL);
        printf("\n");
    } while (DimL<=0||DimL>10);
    

    printf("Inserisci %d elementi: ", DimL);
    lettura(M, DimL);
    printf("\n");

    if(simmetrica(M, DimL))
    {
        printf("Simmetrica\n");
    }
    else
    {
        printf("Non simmetrica\n");
    }


    
}