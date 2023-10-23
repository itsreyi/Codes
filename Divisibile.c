#include <stdio.h>

int main()
{
    int Numero, i, Primo = 0;
    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &Numero);

    for (i = 2; i <= Numero / 2; ++i)
    {
        if (Numero % i == 0)
        {
            Primo = 1;
            break;
        }
    }

    if(Primo==1){
        printf("%d non è un numero primo.", Numero);}

    return 0;
}
