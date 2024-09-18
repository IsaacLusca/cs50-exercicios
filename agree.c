#include<stdio.h>
#include<cs50.h>

int main(void)
{
    char c = get_chat("Voce aceita os termos? s ou n ");
    if (c == "s")
    {
        printf("Aceito.");
    }
    else if (c == "n")
    {
        printf("Nao aceito");
    }
}
