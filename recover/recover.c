#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    FILE *f = fopen(argv[1], "r");

    BYTE buffer[];
    fread(&buffer, sizeof(BYTE), 512, f);
}

// obrir o card
// procurar na memoria algum inicio de arquivo jpeg
// se encontrado, deve abrir uma nova jpege
// gravara blocos de 512 bytes ate encontrar um novo arquivo jpeg
//

