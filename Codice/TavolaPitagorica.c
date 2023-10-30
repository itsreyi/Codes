#include <stdio.h>

int main()
{
    int i, j;
    for (j = 1; j <= 10;)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%4d ", i * j);
        }
        printf("\n");
        j++;
    }

    return 0;
}