#include<stdio.h>
#define Dim 5

int main()
{
    int a[]={4, 1, 8, 0, 5};
    int i, j;
    int dl, n;

    for(dl=0; dl<Dim; dl++)
    {
        j=dl;
        n=a[dl];
        while (j > 0 && n < a[j - 1])
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = n;
    }
}