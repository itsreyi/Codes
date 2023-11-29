#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nomefile[30];
    char c;

    FILE *pf;

    printf("Nome file: ");
    scanf("%s", nomefile);

    pf = fopen(nomefile, "rt");
    if(pf == NULL)
    {
        printf("Errore nella lettura file %s", nomefile);
        exit(1);
    }

    while(fscanf(pf, "%c", &c) == 1)
    {
        printf("%c", c);
    }

    if(fclose(pf)!=0)
    {
        printf("Errore chiusura file\n");
        exit(2);
    }
}