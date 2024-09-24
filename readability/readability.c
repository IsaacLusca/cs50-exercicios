#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

// int contador_letras(string txt);
int main(void)
{
    int let = 0;
    int pal = 0;
    int sent = 0;

    string texto = get_string("Text: ");

    // int letras = contador_letras(texto);
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
            pal++;
        }
        let++;
    }

    printf("letras: %i\nPalavras: %i\n",let, pal);
}

// int contador_letras(string txt)
// {
//     int let = 0;
//     int pal = 0;
//     for (int i = 0, n = strlen(txt); i < n; i++)
//     {
//         if (txt[i] == ' '||
//             txt[i] == '.'||
//             txt[i] == ','||
//             txt[i] == '?'||
//             txt[i] == '!'||
//             txt[i] == '/'||
//             txt[i] == '\''
//         )
//         {
//             let--;
//             pal++;
//         }
//         let++;
//     }
//     return let, pal;
// }


// calcular qtd de letra
// calcular qtd de palavras
// calcular qtd de sentenças
