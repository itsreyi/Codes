#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Iserisci A: ");
    scanf("%d", &a);
    printf("Iserisci B: ");
    scanf("%d", &b);
    printf("Iserisci C: ");
    scanf("%d", &c);

    if(a!=b&&b!=c&&c!=a)
    {
        printf("Il trinagolo e' scaleno");
    }
    else
    {
        if(a==b&&b==c&&c==a)
        {
            printf("Il trinagolo e' equilatero");
        }
        else
        {
            if(a==b||b==c||c==a)
            {
                printf("Il triangolo e' isoscele");
            }
        }
    }
    return 0;
}
