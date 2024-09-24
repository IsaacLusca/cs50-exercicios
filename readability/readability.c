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

    for (int i = 0, n = strlen(texto); i < n; i++)
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
        let++;
    }
    printf("letras: %i\n",let);
}

// calcular qtd de letra
// calcular qtd de palavras
// calcular qtd de sentenças
