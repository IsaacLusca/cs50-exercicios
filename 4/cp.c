#include <stdio.h>
#include <stdint.h>

// Retorna dados brutos, 8 bits, sem valor negativo e apenas dados brutos
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // rb é leitura - read, binária, pegando apenas imagens, etcc
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    // fread lê arquivos
    // "&b passa por referência "Como o scanf, é preciso identificar onde serão carragados os bytes na memória, por isso &
    //
}
