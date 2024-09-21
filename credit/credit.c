#include <cs50.h>
#include <stdio.h>

int main(void)
{

long cartao;
int sumResto = 0;
int sumResto2 = 0;
int tamanho = 0;
// int primDigito;

do
{
    cartao = get_long("Number: ");
}
while (cartao < 1);

// Cartão temporário para o while
long tempCartao = cartao;

// função que soma e multiplica por 2os restos dos penúltimos dígitos
while (tempCartao > 0)
{
    int resto = (tempCartao / 10) % 10;
    int multResto = resto * 2;
    if (multResto > 9)
    {
        multResto = (multResto % 10) + 1;
    }
    sumResto += multResto;
    tempCartao /= 100;
}

long tempCartao2 = cartao;

// função que soma os restos dos ultimos dígitos
while (tempCartao2 > 0)
{
    int resto = tempCartao2 % 10;
    sumResto2 += resto;
    tempCartao2 /= 100;
}
printf("%i\n", sumResto + sumResto2);

  // Calcular o comprimento
long tempCartao3 = cartao;
while (tempCartao3 > 0)
{
    tempCartao3 /= 10;
    tamanho++;
}

// Obter os dois primeiros dígitos
long primeirosDigitos = cartao;
while (primeirosDigitos >= 100)
{
    primeirosDigitos /= 10;
}

printf("%i\n", tamanho);
printf("%li\n", primeirosDigitos);
}




// Entrada do usuário
// calcular a soma da verificação.
// Verificar comprimento do cartão para ver se condiz.
// Printar se é master, visa, amex ou invalido.
