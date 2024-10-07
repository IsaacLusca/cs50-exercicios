#include <stdio.h>
#include <stdlib.h>

// #define HEADER_SIZE = 512;
const int HEADER_SIZE = 512;
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    FILE *f = fopen(argv[1], "r");

    BYTE buffer[HEADER_SIZE];
    int blocos = fread(&buffer, sizeof(BYTE), HEADER_SIZE, f);

    while (fread(&buffer, sizeof(BYTE), 4, f) == 0xff||
           fread(&buffer, sizeof(BYTE), 4, f) == 0xd8||
           fread(&buffer, sizeof(BYTE), 4, f) == 0xff)
    {
        // logica
    }
}

// obrir o card
// procurar na memoria algum inicio de arquivo jpeg
// se encontrado, deve abrir uma nova jpege
// gravara blocos de 512 bytes ate encontrar um novo arquivo jpeg
//

