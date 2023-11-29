#include<stdio.h>
#include<stdlib.h> //Per usare exit


int main()
{
    FILE *pf; //puntatore di tipo FILE
    char parola[20];

    int n_parole;
    int risultato_chiusura;
    pf = fopen("esempio.txt", "rt"); //apre il file "esempio.txt" in (read) e sapendo che è un file di (testo) -> "rt"
    if(pf==NULL)
    {
        printf("Errore apertura file");
        exit(1); //esce dal programma
    }

    n_parole = fscanf(pf, "%s", parola); //mette nella stringa (parola) quello che c'è nel file
    if(n_parole==1) //invece di n_parole si può mettere fscanf(pf, "%s", parola)
    {
        printf("%s", parola); //stampa stringa
    }
    risultato_chiusura = fclose(pf); //Chiusura (prende in paramrtro il puntatore a file)
    if(risultato_chiusura!=0) //invece di risultato_chiusura si può mettere fclose(pf)
    {
        printf("Errore chiusura file\n");
        exit(2); //esce dal programma
    }

    return 0;
}
