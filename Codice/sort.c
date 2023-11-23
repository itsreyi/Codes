#include<stdio.h>
#define DimF 100

int main()
{
    int DimL;       //Dimensione del vettore (Input Utente) Max DimL
    int array[DimF];

    int i, j;
    int pos=0;      //Contatore che tiene conto di quante posizioni sono occupate
    int temp;       //Variabile temporanea usata per lo ShiftR

    do      //Insrimento di DimL + Controllo se accettabile
    {
        printf("Inseire il numero di posti del Array: ");
        scanf("%d", &DimL);
        if(DimL<=0)
        {
            printf("[!] Il valore inserito non e' valido [!]\n");
        }
    } while (DimL<=0);

    for(i=0; i<DimL; i++)       //Inserimeto valori nell' Array
    {
        printf("%d- Inserire il valore: ", i);
        scanf("%d", &array[i]);
        pos++;      //Incremento perchè i posti occupati sono aumentati

        for(j=0; j<pos; j++)        //Ciclo per capire se array[i] è < di qualsiasi posizione dell' array
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                int i2=i;
                for(i2; i2!=j+1; i2--)        //ShiftR per i valori compresi tra J e I
                {
                    array[i2]=array[i2-1];
                }

                array[j]=temp;  //Posizionamento del valore da ordinare nella posizione corretta
            }
        }
    }

    for(i=0; i<DimL; i++)
    {
        printf("%d- array: %d\n", i, array[i]);
    }
}