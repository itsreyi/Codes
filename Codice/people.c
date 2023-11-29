#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char cognome[50];
    char nome[50];
    char sesso;
    int  nascita;
}Persona;


int main()
{
    Persona persone[100];
    char carattere[100];

    FILE *pf;

    pf = fopen("people.txt", "rt");
    if(pf == NULL)
    {
        printf("Errore apertura\n");
        exit(1);
    }

    while(fscanf(pf, "%s%s%s%d", persone[0].cognome, persone[0].nome, carattere, &persone[0].nascita)==4)
    {
        persone[0].sesso = carattere[0];
    }
    

    fclose(pf);   

}