#include <cs50.h>
#include <stdio.h>

int main(void)
{

long int cartao;
int resto;
int sumResto = 0;
do
{
    cartao = get_long("Number: ");
}
while (cartao < 1);

while (cartao > 0)
{
    resto = (cartao / 10) % 10;
    sumResto = sumResto + resto * 2;
    if(sumResto > 9)
    cartao = cartao / 100;
}
    printf("%i\n", sumResto);


}




// Entrada do usuário
// calcular a soma da verificação.
// Verificar comprimento do cartão para ver se condiz.
// Printar se é master, visa, amex ou invalido.
