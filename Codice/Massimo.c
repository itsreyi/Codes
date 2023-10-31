#include <stdio.h>

int CalcMax(int n1, int n2, int n3)
{  
    if(n1>n2)
    {
        if(n1>n3)
        {
            return n1;
        }
        else
        {
            return n3;
        }
    }
    else
    {
        if(n2>n3)
        {
            return n2;
        }
        else
        {
            return n3;
        }
    }
}
int main()
{
    int n1, n2, n3, max;


    printf("Inserisci il secondo numero: ");
    scanf("%d", &n1);
    printf("\n");

    printf("Inserisci il primo numero: ");
    scanf("%d", &n2);
    printf("\n");

    printf("Inserisci il secondo numero: ");
    scanf("%d", &n3);
    printf("\n");

    max = CalcMax(n1, n2, n3);

    printf("Il valore massimo e': %d\n", max);

    return 0;
}