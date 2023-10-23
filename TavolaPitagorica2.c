#include<stdio.h>

int main()
{
    int i, j;
    int finito=0;
    for (i = 1; !finito && i <= 10; i++)
    {
        for (j = 1; !finito && j <= 10; j++)
        {
            printf("%4d ", i * j);
            if(i*j>50)
            {
                finito=1; //Ci permetterà di uscire da entrmbi i cicli  //Migliorabile con goto
            }
        }
        printf("\n");
    }
}