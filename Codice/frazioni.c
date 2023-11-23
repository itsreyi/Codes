#include<stdio.h>
#define DimF 100

typedef struct 
{
    int numeratore;
    int denominatore;
}Frazione;

Frazione frazione(int n, int d)
{
    Frazione fr;

    fr.numeratore=n;
    fr.denominatore=d;

    return fr;
}

void stampafrazionaria(Frazione f)
{
    printf("%d/%d\n", f.numeratore, f.denominatore);
}

void stampadecimale(Frazione f)
{
    printf("Decimale: %f\n", (float)f.numeratore/f.denominatore);
}


int main()
{
    Frazione f1, f2;

    f1 = frazione(2, 3);
    f2 = frazione(3, 4);

    stampafrazionaria(f1);
    stampadecimale(f1);
}