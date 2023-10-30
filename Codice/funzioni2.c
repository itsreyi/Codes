#include <stdio.h>

void Logo(void)
{
    char logo;
    printf("Logo: ");
    scanf("%c", &logo);
    printf("\n");

    for (int i = 0; i < 12; i++) {
        printf("%c", logo);
    }
    printf("\n%c  Rubrica %c\n", logo, logo);
    for (int i = 0; i < 12; i++) {
        printf("%c", logo);
    }
    printf("\n");
}

int main()
{
    Logo();
    printf("1. ---------- \n");
    printf("2. ---------- \n");
    return 0;
}