#include<stdio.h>
#define DIM 30

int main()
{
    char a[DIM]= "Ciao";
    char b[DIM];

    for(int i=0; i<DIM; i++)
    {
        b[i]=a[i];
    }

    printf("%s\n", b);

    return 0;
}