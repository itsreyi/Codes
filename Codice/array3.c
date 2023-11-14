#include<stdio.h>
#define Dim 100

int main()
{
    int n;
    int array[Dim];

    printf("Inserisci il numero: ");
    scanf("%d", &n);
    printf("\n");

    for(int i=1; i<12; i++)
    {
        array[i]=i+n;
        printf("%d. > %d\n", i, array[i]);
    }
}