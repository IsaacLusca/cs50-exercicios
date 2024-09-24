#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int contador_letras(string txt);
int contador_palavras(string txt);

int main(void)
{
    int pal = 0;
    int sent = 0;

    string texto = get_string("Text: ");

    int letras = contador_letras(texto);
    int palavras = contador_palavras(texto);

    printf("letras: %i\nPalavras: %i\n", letras, palavras);
}

int contador_letras(string txt)
{
    int let = 0;
    for (int i = 0, n = strlen(txt); i < n; i++)
    {
        if (txt[i] == ' '||
            txt[i] == '.'||
            txt[i] == ','||
            txt[i] == '?'||
            txt[i] == '!'||
            txt[i] == '/'||
            txt[i] == '\''
        )
        {
            let--;
        }
        let++;
    }
    return let;
}

int contador_palavras(string txt)
{
    int pal = 0;
    bool dentro_palavra = false;
    for (int i = 0, n = strlen(txt); i < n; i++)
    {
        if (isalpha(txt[i]))
        {
            if(!dentro_palavra)
            {
                pal++;
                dentro_palavra = true;
            }
        }
        else
        {
            dentro_palavra = false;
        }
    }
    return pal;
}

    // if (txt[i] == ' '||
    //     txt[i] == '.' && txt[i] ==' '||
    //     txt[i] == '!'||
    //     txt[i] == '!' && txt[i] ==' '||
    //     txt[i] == '?'||
    //     txt[i] == '?' && txt[i] ==' '||
    //     txt[i] == '/'||
    //     txt[i] == '\''
    //     )
    //     {
    //         pal++;
    //     }

// calcular qtd de letra
// calcular qtd de palavras
// calcular qtd de sentenças
