#include <cs50.h>
#include <stdio.h>

int main(void)
{

long int cartao;
int sumResto = 0;
do
{
    cartao = get_long("Number: ");
}
while (cartao < 1);

while (cartao > 0)
{
    int resto = (cartao / 10) % 10;
    int multResto = resto * 2;
    if (multResto > 9)
    {
        multResto = (multResto % 10) + 1;
    }
    sumResto = sumResto + multResto;
    cartao = cartao / 100;
}
    printf("%i\n", sumResto);

while (cartao > 0)
{
    
}
}




// Entrada do usuário
// calcular a soma da verificação.
// Verificar comprimento do cartão para ver se condiz.
// Printar se é master, visa, amex ou invalido.
