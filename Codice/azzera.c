#include<stdio.h>

void azzaera(int *pa)
{
    *pa = 0;
}


int main()
{
    int a;
    scanf("%d", &a);

    azzaera(&a);
    
    printf("%d", a);

}