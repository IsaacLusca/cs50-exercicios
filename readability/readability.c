#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
    int let = 0;
    int pal = 0;
    int sent = 0;

    string texto = get_string("Text: ");

    let = strlen(texto);
    for (int i = 0; i < let; i++)
    {
        if (texto[i] == ' '||
            texto[i] == '.'||
            texto[i] == ','||
            texto[i] == '?'||
            texto[i] == '!'||
            texto[i] == '/'||
            texto[i] == '\''
        )
        {
            let--;
        }
        else
        {
            let++;
        }
    }
    printf("letras: %i\n",let);
}

// calcular qtd de letra
// calcular qtd de palavras
// calcular qtd de sentenças
