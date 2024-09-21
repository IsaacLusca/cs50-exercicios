#include <cs50.h>
#include <stdio.h>

int soma_mult_resto(long cartao);
int soma_resto(long cartao);
int calcular_tamanho(long cartao);
int obter_primeiros_digitos(long cartao);

// Função principal
int main(void)
{
    long cartao;

    // Solicita um número de cartão válido
    do
    {
        cartao = get_long("Number: ");
    }
    while (cartao < 1);

    // Calcula as somas dos dígitos
    int sumResto = soma_mult_resto(cartao);
    int sumResto2 = soma_resto(cartao);
    int sum = sumResto + sumResto2;

    // Calcula o tamanho do cartão
    int tamanho = calcular_tamanho(cartao);

    // Obter os dois primeiros dígitos
    long primeirosDigitos = obter_primeiros_digitos(cartao);

    // Validação do cartão com base nas regras
    if ((sum % 10 == 0 && tamanho > 12 && tamanho < 17))
    {
        if (primeirosDigitos == 37)
        {
            printf("AMEX\n");
        }
        else if (primeirosDigitos == 22 || primeirosDigitos == 55 || primeirosDigitos == 51 || primeirosDigitos == 52)
        {
            printf("MASTERCARD\n");
        }
        else if (primeirosDigitos == 41 || primeirosDigitos == 40 || primeirosDigitos == 42 || primeirosDigitos == 49)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

// Função para calcular a soma dos penúltimos dígitos multiplicados por 2
int soma_mult_resto(long cartao)
{
    int sumResto = 0;
    while (cartao > 0)
    {
        int resto = (cartao / 10) % 10;
        int multResto = resto * 2;
        if (multResto > 9)
        {
            multResto = (multResto % 10) + 1;
        }
        sumResto += multResto;
        cartao /= 100;
    }
    return sumResto;
}

// Função para calcular a soma dos últimos dígitos
int soma_resto(long cartao)
{
    int sumResto2 = 0;
    while (cartao > 0)
    {
        int resto = cartao % 10;
        sumResto2 += resto;
        cartao /= 100;
    }
    return sumResto2;
}

// Função para calcular o tamanho do cartão
int calcular_tamanho(long cartao)
{
    int tamanho = 0;
    while (cartao > 0)
    {
        cartao /= 10;
        tamanho++;
    }
    return tamanho;
}

// Função para obter os dois primeiros dígitos
int obter_primeiros_digitos(long cartao)
{
    while (cartao >= 100)
    {
        cartao /= 10;
    }
    return cartao;
}
