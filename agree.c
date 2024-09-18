#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char c = get_char("Voce aceita os termos? s ou n ");

    if (c == 's' || c == 'S')
    {
        printf("Aceito.\n");
    }

    else if (c == 'n' || c == 'N')
    {
        printf("Nao aceito.\n");
    }
    // ((c != 'n' || c != 'N') && (c != 's' || c != 'S'))
    // {
    //     printf("Resposta invalida.");
    // }
}
