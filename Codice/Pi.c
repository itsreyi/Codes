#include <stdio.h> //       [!]NON VA, DA VEDERE [!]

void Pi(int n)
{
    int iPi = 0, i;

    for (i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            iPi++;
            n--;
        }
    }

    printf("Pi: %d\n", iPi);
}

int main()
{
    int n;

    printf("Inserisci un numero: ");
    scanf("%d", &n);
    printf("\n");

    Pi(n);

    return 0;
}