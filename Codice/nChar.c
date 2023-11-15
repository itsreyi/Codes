#include<stdio.h>
#define DIM 10

int main()
{
    int i=0;
    char a[DIM];

    scanf("%s", a);
    while(a[i]!='\0')
    {      
        i++;
    }

    printf("%d\n", i);
}