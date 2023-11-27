#include<stdio.h>
#define DimF 100

int main()
{
    int array[DimF];
    int DimL;
    int  i;

    do
    {
        printf("Inserire numero posizioni vettore (MAX 100): ");
        scanf("%d", &DimL);

        if(DimL<=0)
        {
            printf("[!] Il valore inserito non e' valido [!]\n");
        }
    } while (DimL<=0);

    for(i=0; i<DimL; i++)
    {
        printf("%d- Inserire il valore nell' array: ", i);
        scanf("%d", &array[i]);
        int shiftL;      //Variabile per lo shift a sinistra
        int temp;       //Variabile per lo swap
        int pos=0;      //Contrggia le posizioni piene del vettore
        pos++;

        if(pos>1)
        {
            for(int j=0; j<pos; j++)
            {
                if(array[i]<array[j])
                {
                    for(shiftL=i; shiftL==j; shiftL--)
                    {
                        temp=array[shiftL-1];
                        array[shiftL-1]=array[shiftL];
                        array[shiftL]=temp;
                    }
                }
            }
        }
    }

    for(i=0; i<DimL; i++)
    {
        printf("%d- dell' array: %d\n", i, array[i]);
    }
    

}
