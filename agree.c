#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char c = get_char("Voce aceita os termos? s ou n ");
    if (c == 's')
    {
        printf("Aceito.\n");
    }
    else if (c == 'n')
    {
        printf("Nao aceito.\n");
    }
}
