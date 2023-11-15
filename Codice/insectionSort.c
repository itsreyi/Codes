#include <stdio.h>
#define DIM 5

int main(void)
{
    int n, a[DIM], dl, i, j;

    for (dl = 0; dl < DIM; dl++)
    {
        scanf("%d", &n);
        j = dl;
        while (j > 0 && n < a[j - 1])
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = n;
    }
    for (i = 0; i < dl; i++)
        printf("%d ", a[i]);
    printf("\n");
}