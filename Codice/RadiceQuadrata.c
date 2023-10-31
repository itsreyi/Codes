#include <stdio.h>

float squareRoot(float n)
{
    float x = n;
    float y = 1;
    float e = 0.000001; // precisione
    while (x - y > e)
    {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main()
{
    float n;
    printf("Inserisci un numero: ");
    scanf("%f", &n);
    printf("La radice quadrata di %f è %f", n, squareRoot(n));
    return 0;
}