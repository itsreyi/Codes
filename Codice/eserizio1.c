#include <stdio.h>

int CMD(int a, int b)
{
    int t;

    int m, i;

    printf("\n");

    if (a > b)
    {
        t = b;
        b = a;
        a = t;
    }
    m = 1;
    i = 2;

    while (i <= a)
    {
        if(a%i==0)
        {
            if(b%i==0)
            {
                m=i;
            }
        }
        i=i+1;
    }

    return m;
}


int main()
{
    int a, b;  //b è i   M(a,b) a inserito--i da 1 a 10
    int array[11];

    array[0]=0;


    printf("Inserire a: ");
    scanf("%d", &a);
    printf("\n");

    for(b=1; b<11; b++)
    {
        array[b]=CMD(a,b);
    }

    for(b=1;b<11;b++)
    {
        printf("MCD(%d, %d)= %d\n",a, b, array[b]);
    }

    return 0;
}