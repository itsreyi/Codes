#include<stdio.h>
#include<string.h>

#define DIM 20

int main()
{
    int i;
    char c;
    char s[DIM];
    scanf("%c", &c);
    scanf("%s", s);

    while (s[i]!='\0')
    {
        if(c==s[i])
        {
            break;
        }
        i++;
    }

    if(s[i]=='\0')
    {
        printf("La stringa non contiene il carattere\n");
    }
    else
    {
        printf("La stringa contiene il carattere\n");
    }
}