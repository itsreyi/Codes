#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define DimF 50

int main()
{   
    char parola_indovinare[DimF] = "impiccato";
    char parola_maschera[DimF];
    char parole_trovate[DimF];
    int lunghezza_parola;
    
    char parola_utente[DimF];

    int tentativiMax, tentativi=0;
    int trovato, trovato2=0, rindondanza=0;

    int i, j;

    lunghezza_parola = strlen(parola_indovinare);
    tentativiMax = lunghezza_parola+5;

    for(i=0; i<lunghezza_parola; i++)
    {
        if(parola_indovinare[i] =='a' || parola_indovinare[i] =='e' || parola_indovinare[i] =='i' || parola_indovinare[i] =='o' || parola_indovinare[i] =='u')
        {
            parola_maschera[i] = '+';
        }
        else
        {
            parola_maschera[i] = '-';
        }
    }

    do
    {   
        printf("%s", parola_maschera);
        printf(" Inserisci una lettera: (Numero tentativi %d/%d)", tentativiMax, tentativi);
        scanf(" %c", &parola_utente[j]);
        printf("\n");

        trovato=0;
        rindondanza=0;
        for(i=0; i<lunghezza_parola; i++)
        {
            if(parola_utente[j]==parola_indovinare[i])
            {
                if(parola_utente[j]!=parole_trovate[i])
                {
                    parola_maschera[i]=parola_utente[j];
                    parole_trovate[i]=parola_utente[j];
                    trovato++;
                    trovato2++;
                }
                else
                {
                    printf("[!] La parola inserita e' stata già trovata [!]\n");
                    rindondanza++;

                    break;
                }
            }
        }

        if(trovato==0)
        {
            if(rindondanza==0)
            {
                tentativi++;
            }
        }

        j++;
    }while (tentativi!=tentativiMax && trovato2!=lunghezza_parola);

    printf("%s", parola_maschera);
    

}