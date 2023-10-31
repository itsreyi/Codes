#include<stdio.h>

int ValoreAssoluto(int X)
{
    if(X<0)
    {
        return -X;
    }
    else
    {
        return X;
    }
}

int main()
{
    int x, ValoreASS;

    printf("Inserire un valore: ");
    scanf("%d", &x);
    printf("\n");

    ValoreASS= ValoreAssoluto(x);

    printf("Il valore assoulto e': %d\n", ValoreASS);

    return 0;
}