#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define DimF 100

typedef struct
{
    char settimana[DimF];
    char slot1[DimF];
    char slot2[DimF];
    char slot3[DimF];
    char slot4[DimF];
} Orario;

void stampaOrario(Orario *o)
{
    int i;
    printf("GIORNO          SLOT1   SLOT2   SLOT3   SLOT4\n");
    for (i = 1; i < 8; i++)
    {
        printf("%d-%s\t%4s\t%4s\t%4s\t%4s\n", i, o[i].settimana, o[i].slot1, o[i].slot2, o[i].slot3, o[i].slot4);
    }
}

void modificaOrario(Orario *o, int giorno,  int slot)
{
    char lezione[DimF];

    switch (slot)
    {
    case 1:
        printf("Inserisci la lezione: ");
        scanf("%s", lezione);
        strcpy(o[giorno].slot1, lezione);
        printf("\n");
        break;
    case 2:
        printf("Inserisci la lezione: ");
        scanf("%s", lezione);
        strcpy(o[giorno].slot2, lezione);
        printf("\n");
        break;
    case 3:
        printf("Inserisci la lezione: ");
        scanf("%s", lezione);
        strcpy(o[giorno].slot3, lezione);
        printf("\n");
        break;
    case 4:
        printf("Inserisci la lezione: ");
        scanf("%s", lezione);
        strcpy(o[giorno].slot4, lezione);
        printf("\n");
        break;
    
    default:
        break;
    }
}

int main()
{
    Orario o[8] = {
        {.settimana = "NULL", .slot1 = "NULL", .slot2 = "NULL", .slot3 = "NULL", .slot4 = "NULL"},
        {.settimana = "Lunedì    ", .slot1 = "Vuoto", .slot2 = "Vuoto", .slot3 = "Vuoto", .slot4 = "Vuoto"},
        {.settimana = "Martedì   ", .slot1 = "Vuoto", .slot2 = "Vuoto", .slot3 = "Vuoto", .slot4 = "Vuoto"},
        {.settimana = "Mercoledì ", .slot1 = "Vuoto", .slot2 = "Vuoto", .slot3 = "Vuoto", .slot4 = "Vuoto"},
        {.settimana = "Giovedì   ", .slot1 = "Vuoto", .slot2 = "Vuoto", .slot3 = "Vuoto", .slot4 = "Vuoto"},
        {.settimana = "Venerdì   ", .slot1 = "Vuoto", .slot2 = "Vuoto", .slot3 = "Vuoto", .slot4 = "Vuoto"},
        {.settimana = "Sabato    ", .slot1 = "Vuoto", .slot2 = "Vuoto", .slot3 = "Vuoto", .slot4 = "Vuoto"},
        {.settimana = "Domenica  ", .slot1 = "Vuoto", .slot2 = "Vuoto", .slot3 = "Vuoto", .slot4 = "Vuoto"}};

        stampaOrario(o);
        
        int sceltaGiorno=0, sceltaSlot;

        do
        {
            printf("Inserisci il numero corrispondete al giorno della settimana: \n");
            printf("('-1' per uscire)");
            scanf("%d", &sceltaGiorno);

            if(sceltaGiorno==-1){break;}

            printf("Inserisci lo slot (1,2,3,4): ");
            scanf("%d", &sceltaSlot);
            printf("\n");

            modificaOrario(o, sceltaGiorno, sceltaSlot);
        }while(1);
        
        stampaOrario(o);


}
