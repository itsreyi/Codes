#include <stdio.h>
#define DimF 100

typedef struct
{
    int numeratore;         
    int denominatore;
} Frazione;

Frazione frazione(int n, int d)
{
    Frazione fr;

    fr.numeratore = n;
    fr.denominatore = d;

    return fr;
}

void stampafrazionaria(Frazione f)
{
    printf("Non Ridotto%d/%d\n", f.numeratore, f.denominatore);
    printf("Ridotto %d/%d\n", mcd(f.numeratore, f.denominatore));
}
void stampadecimale(Frazione f)
{
    printf("Decimale: %f\n", (float)f.numeratore / f.denominatore);
}

Frazione mcd(int a, int b)
{
    Frazione f;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    f.numeratore=a;
    f.denominatore=b;

    return f;
}

int main()
{
    Frazione f1, f2;

    f1 = frazione(6, 4);
    f2 = frazione(3, 4);

    stampafrazionaria(f1);
    stampadecimale(f1);
}