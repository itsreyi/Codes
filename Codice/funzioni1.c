#include<stdio.h>
void Logo(void)
{
    char logo;
    printf("Logo: ");
    scanf("%c", &logo);
    printf(" %c%c%c Rubrica %c%c%c \n", logo, logo, logo, logo, logo ,logo);
    printf("1. ---------- \n");
    printf("2. ---------- \n");
}
int main()
{
    Logo();
}