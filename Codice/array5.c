#include <stdio.h>
#define Dim 10

int main()
{
    int n, dl;
    int i, j;
    int a[Dim];

    for (dl = 0; dl < Dim; dl++)
    {
        scanf("%d", &n);
        if(n==0){break;}
        n= n*n;

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