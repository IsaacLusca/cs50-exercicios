#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *f = fopen(argv[1], "r");

    int buffer;
    fread(&buffer, sizeof(b), 512);
}

// obrir o card
// procurar na memoria algum inicio de arquivo jpeg
// se encontrado, deve abrir uma nova jpege
// gravara blocos de 512 bytes ate encontrar um novo arquivo jpeg
//

