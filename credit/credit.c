#include <cs50.h>
#include <stdio.h>

int main(void)
{

long cartao;
int sumResto = 0;
int sumResto2 = 0;
do
{
    cartao = get_long("Number: ");
}
while (cartao < 1);

// Cartão temporário para o while
long tempCartao = cartao;

// função que somará os restos dos penúltimos dígitos
while (tempCartao > 0)
{
    int resto = (tempCartao / 10) % 10;
    int multResto = resto * 2;
    if (multResto > 9)
    {
        multResto = (multResto % 10) + 1;
    }
    sumResto = sumResto + multResto;
    tempCartao = tempCartao / 100;
}

long tempCartao2 = cartao;

while (tempCartao2 > 0)
{
    int resto = tempCartao2 % 10;
    int multResto = resto * 2;
    if (multResto > 9)
    {
        multResto = (multResto % 10) + 1;
    }
    sumResto2 = sumResto2 + multResto;
    tempCartao2 = tempCartao2 / 100;
}
    printf("%i\n", sumResto + sumResto2);

}




// Entrada do usuário
// calcular a soma da verificação.
// Verificar comprimento do cartão para ver se condiz.
// Printar se é master, visa, amex ou invalido.
