#include <cs50.h>
#include <stdio.h>

int main(void)
{

long int cartao;
do
{
    cartao = get_long("Number: ");
}
while (cartao < 1);

printf("%li", cartao);
}

// Entrada do usuário
// calcular a soma da verificação.
// Verificar comprimento do cartão para ver se condiz.
// Printar se é master, visa, amex ou invalido.
