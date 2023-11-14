#include <stdio.h>
#define Dim 100

int main()
{
    float ascisse[Dim];
    float ordinate[Dim];
    float a, b, c;
    float varia = -1.0;

    printf("Inserisci il numero: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("\n");

    for (int i = 0; i < 21; i++)
    {
        ascisse[i] = varia;
        ordinate[i] = a * ascisse[i] * ascisse[i] + b * ascisse[i] + c;

        printf("%.1f | %.1f\n", ascisse[i], ordinate[i]);

        varia= varia+0.1;
    }
}