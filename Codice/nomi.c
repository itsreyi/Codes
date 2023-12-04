#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define nStudenti 100
#define DimF 20

typedef struct
{
    char nome[DimF];
    char cognome[DimF];
    int nMatricola;
}Scheda;

void stampa(Scheda *s, int nCampi, FILE *f)
{
    for(int i=0; i<nCampi; i++)
    {
        fprintf(f, "%s  -  %s  -  %d\n", s[i].nome, s[i].cognome, s[i].nMatricola);
    }
}

void ordinamentoM(Scheda *s, int nCampi)
{
    int temp;
    char temp2[50];

        for(int j=0; j<nCampi; j++)
        {
            for(int i=0; i<nCampi; i++)
            {
                if(s[i].nMatricola>s[j].nMatricola)
                {
                    temp=s[j].nMatricola;
                    s[j].nMatricola=s[i].nMatricola;
                    s[i].nMatricola=temp;

                    strcpy(temp2, s[j].nome);
                    strcpy(s[j].nome, s[i].nome);
                    strcpy(s[i].nome, temp2);

                    strcpy(temp2, s[j].cognome);
                    strcpy(s[j].cognome, s[i].cognome);
                    strcpy(s[i].cognome, temp2);
                }
            }
        }
}



int main()
{
    FILE *fileNOrdi;
    fileNOrdi = fopen("nomi.txt", "rt");
    if(fileNOrdi==NULL)
    {
        printf("Errore apertura FILE");
        exit(1);
    }

    FILE *fileOrdi;
    fileOrdi = fopen("ordinati.txt", "wt");
    if(fileOrdi==NULL)
    {
        printf("Errore apertura FILE");
        exit(1);
    }

    Scheda s[nStudenti];
    int i=0;
    int nCampi=0;
    
    while (fscanf(fileNOrdi, "%s %s %d", s[i].nome, s[i].cognome, &s[i].nMatricola)==3)
    {
        i++;
        nCampi++;
    }

    ordinamentoM(s, nCampi);
    stampa(s, nCampi, fileOrdi);


    if(fclose(fileNOrdi)!=0)
    {
        printf("Errore chiusra FILE");
        exit(2);
    }
    if(fclose(fileOrdi)!=0)
    {
        printf("Errore chiusra FILE");
        exit(2);
    }
    return 0;
}