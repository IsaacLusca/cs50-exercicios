#include <stdio.h>
#include <stdint.h>

// Retorna dados brutos, 8 bits, sem valor negativo e apenas dados brutos
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // rb é leitura - read, binária, pegando apenas imagens, etcc
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    if (argv[1] == NULL)
    {
        printf("Não foi possível encontrar o arquivo.");
        return 1;
    }

    BYTE b;

    // fread lê arquivos
    // "&b passa por referência "Como o scanf, é preciso identificar onde serão carragados os bytes na memória, por isso &
    // sizeof pega o tamanho total, byte é apenas 1 mas torna mais dinamico
    // qtd de byte que no caso é 1 será quanto quero copiar por vez
    // e por fim src que é o nome do arquivo

    // QUando não houver mais nada, ele retornará zero que indica que acabou.

    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwhite(&b, sizeof(b), 1, dst);
    }
    fclose(src);
    fclose(dst);
}
// O final copiou uma imagem de um arquivo para outro.
