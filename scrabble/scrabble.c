#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int sum1 = 0;
    int sum2 = 0;

    string palavra1 = get_string("Player 1: ");
    string palavra2 = get_string("Player 2: ");

    

    if(sum1 == sum2)
    {
        printf("Tie!\n");
    }
    if(sum1 > sum2)
    {
        printf("Player 1 wins!\n");
    }
    if(sum1 < sum2)
    {
        printf("Player 2 wins!\n");
    }


    return 0;
}

int calcular_pontuacao(string palavra)
{

}
