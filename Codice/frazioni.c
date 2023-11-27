#include<stdio.h>

typedef struct 
{
    int num;
    int den;
}Frazione;

Frazione sommaFrazioni(Frazione f1, Frazione f2)
{
    Frazione F;
    
    F.num=f1.num+f2.num;
    F.den=f1.den*f2.den;

    return F;
}

Frazione sottrazioneFrazioni(Frazione f1, Frazione f2)
{
    Frazione F;
    
    F.num=f1.num-f2.num;
    F.den=f1.den*f2.den;

    return F;
}

Frazione molitplicazioneFrazioni(Frazione f1, Frazione f2)
{
    Frazione F;
    
    F.num=f1.num*f2.num;
    F.den=f1.den*f2.den;

    return F;
}

Frazione divisioneFrazioni(Frazione f1, Frazione f2)
{
    Frazione F;
    
    F.num=f1.num*f2.den;
    F.den=f1.den*f2.num;

    return F;
}

int mcd(int a, int b) 
{
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b = b - a;
  }
  return a;
}

Frazione semplificaFrazione(Frazione f)
{
    int m = mcd(f.num, f.den);
    f.num = f.num / m;
    f.den = f.den / m;

    return f;
}

Frazione inputFrazione(int num, int den)
{
    Frazione f;

    f.num=num;
    f.den=den;

    return f;
}

void stampaFraziario(Frazione f)
{
    printf("Frazionario (non semplificato): %d/%d \n", f.num, f.den);

    Frazione f2;
    f2=semplificaFrazione(f);
    printf("Frazionario (semplificato): %d/%d \n", f2.num, f2.den);
}

void stampaDecimale(Frazione f)
{
    printf("Decimale: %f\n", (float)f.num/f.den);
}

int main()
{
    Frazione f1, f2;

    int n, m;
    int menu;

    printf("Inerisci la prima farzione: ");
    scanf("%d %d", &n, &m);
    f1=inputFrazione(n, m);
    printf("\n");
    
    printf("Inerisci la seconda farzione: ");
    scanf("%d %d", &n, &m);
    f2=inputFrazione(n, m);
    printf("\n");

    printf("-- Frazione1: --\n");
    stampaFraziario(f1);
    stampaDecimale(f1);

    printf("-- Frazione2: --\n");
    stampaFraziario(f2);
    stampaDecimale(f2);
    printf("\n");


    do
    {
        do
        {
            printf("Quale operazione vuoi eseguire? \n");
            printf("1. Somma \n");
            printf("2. Sottrazione \n");
            printf("3. Moliplicazione \n");
            printf("4. Divisione \n");
            printf("0 . Esci \n");

            scanf("%d", &menu);
            if(menu<0 || menu>4)
            {
               printf("[!] Il numero inserito non e' valido [!]");
            }
        }while (menu<0 || menu>4);


        switch (menu)
        {
            case 1:
                printf("-- Somma Frazioni: --\n");
                stampaFraziario(sommaFrazioni(f1, f2));
                printf("\n");
                break;
    
            case 2:
                printf("-- Sottrazione Frazioni: --\n");
                stampaFraziario(sottrazioneFrazioni(f1, f2));
                printf("\n");
                break;

            case 3:
                printf("-- Moltiplicazione Frazioni: --\n");
                stampaFraziario(molitplicazioneFrazioni(f1, f2));
                printf("\n");
                break;

            case 4:
                printf("-- Divisione Frazioni: --\n");
                stampaFraziario(divisioneFrazioni(f1, f2));
                printf("\n");
                break;
    
            default:
                printf("Addio o/\n");
                break;
    }
    } while (menu!=0);
    
    return 0;
}
