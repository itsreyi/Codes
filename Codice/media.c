#include <stdio.h>
#include <math.h>

float CalcMedia(int N, int Somma)
{
    float Media;

    Media = (float)Somma / N;

    return Media;
}

float ClacRadQ(int x)
{
    float risultato;

    risultato = (float)sqrt(x);

    return risultato;
}

int main()
{
    int numero, somma=0;
    int n, i;

    float Media;
    float radqMedia;

    printf("Quanti nuemri vuoi inserie: ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        printf("Inserire il %d^ nuemro: ", i);
        scanf("%d", &numero);
        printf("\n");

        somma += numero;
    }

    Media = CalcMedia(n, somma);

    printf("La Media e': %.2f\n", Media);

    radqMedia=ClacRadQ(Media);

    printf("La radice quadrata di %.2f e': %.2f\n", Media, radqMedia);

    return 0;
}