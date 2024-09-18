#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char c = get_char("Voce aceita os termos? s ou n ");

    if (c == 's' || 'S')
    {
        printf("Aceito.\n");
    }

    else if (c == 'n' || 'N')
    {
        printf("Nao aceito.\n");
    }
}
