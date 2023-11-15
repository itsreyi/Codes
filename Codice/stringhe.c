#include<stdio.h>
#include<string.h>
#define DIM 20

int main()
{
    int Corrispondenza=0;
    int i, j;
    int InzioCont=0, FineCont;

    char s1[DIM]="zio";
    char s2[DIM]="Tizio";

    printf("Inserie la prima parola (Max 20 Caratteri): ");
    scanf("%s", s1);
    printf("\n");
    printf("Inserie la seconda parola (Max 20 Caratteri): ");
    scanf("%s", s2);
    printf("\n");

    int s1Lng, s2Lng;

    s1Lng=strlen(s1);
    s2Lng=strlen(s2);

    if(s1Lng>s2Lng)
    {
        FineCont=s2Lng;

        for(j=0; j<s2Lng; j++)
        {
            for(i=InzioCont; i<FineCont; i++)
            {
                if(s2[j]==s1[i])   
                {
                    Corrispondenza++;
                }
            }

            if(Corrispondenza==3)
            {
                break;
            }
            else
            {
                InzioCont++;
                FineCont++;
            }

        }

        if(Corrispondenza==3)
        {
            printf("La parola %s e contenuta nella parola %s", s2, s1);
        }
        else
        {
            printf("La parola %s NON e contenuta nella parola %s", s2, s1);
        }

    }
    else if(s2Lng>s1Lng)
    {
        FineCont=s1Lng;

        for(j=0; j<s1Lng; j++)
        {
            for(i=InzioCont; i<FineCont; i++)  
            {
                if(s1[j]==s2[i])   
                {
                    Corrispondenza++;
                }
            }

            if(Corrispondenza==3)
            {
                break;
            }
            else
            {
                InzioCont++;
                FineCont++;
            }

        }

        if(Corrispondenza==3)
        {
            printf("La parola %s e contenuta nella parola %s", s1, s2);
        }
        else
        {
            printf("La parola %s NON e contenuta nella parola %s", s1, s2);
        }
    }
    else
    {
        printf("ERRORE INASPETTATO - Chiusura del programma in corso!\n\n");
        return 0;
    }
}