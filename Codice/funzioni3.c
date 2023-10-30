#include<stdio.h>

void riga(int M, int N)
{
    int i, j;
    for(i=0; i<M; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

int main()
{
    int m, n;

    printf("Righe: ");
    scanf("%d", &m);
    printf("\n");
    printf("Colonne: ");
    scanf("%d", &n);
    printf("\n");

    riga(m, n);
}