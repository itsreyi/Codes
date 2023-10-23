#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d -> BimBum \n", i);
        }
        else if (i % 3 == 0)
        {
            printf("%d -> Bim \n", i);
        }
        else if (i % 5 == 0)
        {
            printf("%d -> Bum \n", i);
        }
        else
        {
            printf("%d -> X \n", i);
        }
    }
}