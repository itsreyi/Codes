#include <stdio.h>

float diametroCherchio(int raggio)
{
    raggio += raggio;

    return raggio;
}

float perimetroCherchio(int raggio)
{
    float diametro;
    float perimetro;
    diametro = diametroCherchio(raggio);

    perimetro = (float)diametro * 3.14;

    return perimetro;
}

float areaCherchio(int raggio)
{
    float area;
    area=(float)(raggio*raggio)*3.14;

    return area;
}

int main()
{
    int raggio;
    float diametro;
    float perimetro;
    float area;
    
    do
    {
        printf("Inserire il raggio del cerchio: ");
        scanf("%d", &raggio);
        printf("\n");

        if(raggio<=0)
        {
            printf("[!] L' input inserito non e' valido [!]\n");
        }
    }
    while(raggio==0 || raggio<0);
    
    

    diametro = diametroCherchio(raggio);
    perimetro=perimetroCherchio(raggio);
    area = areaCherchio(raggio);

    printf("Diametro: %.2f\n", diametro);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);
}