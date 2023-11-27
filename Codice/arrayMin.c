#include<stdio.h>
#define DIM 5

int main()
{
    int a[DIM];
    int min=0;

    scanf("%d", &a[0]);
    min=a[0];

    for(int i=1; i<DIM; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<min)
        {
            min=a[i];
        }
    }

    printf("\n");
    printf("%d\n", min);

}