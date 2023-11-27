#include<stdio.h>  //Da fixare
#include<string.h>

typedef struct 
{
    int giorno;
    char mese[20];
    int anno;
}Data;

typedef struct
{
    char nome[20];
    Data nascita;
}Persona;


int main()
{
    Data oggi;
    Persona p;

    printf("Inserisci la data di oggi: ");
    scanf("%d %s %d",&oggi.giorno, oggi.mese, &oggi.anno);

    printf("Inserisci il tuo nome, e la data di nascita: ");
    scanf("%s %d %s %d", p.nome, &p.nascita.giorno, p.nascita.mese, &p.nascita.anno);

    if(oggi.giorno==p.nascita.giorno && strcmp(oggi.mese, p.nascita.mese)==0 && oggi.anno==p.nascita.anno)
    {
        printf("Auguri!\n");
    }
    else
    {
        printf("Non è il tuo compleanno!\n");
    }



}