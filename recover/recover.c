#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// #define HEADER_SIZE = 512;
const int HEADER_SIZE = 512;
typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover file.raw'");
        return 1;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL)
    {
        printf("Não foi possível abrir o arquivo.\n");
        return 2;
    }

    FILE *nova_img = NULL;
    int count = 0;
    char filename[9];

    BYTE buffer[HEADER_SIZE];
    // fread(buffer, sizeof(BYTE), HEADER_SIZE, f);

    while (fread(buffer, sizeof(BYTE), HEADER_SIZE, f) == HEADER_SIZE)
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (nova_img != NULL)
            {
                fclose(nova_img);
            }

            sprintf(filename, "%03i.jpeg", count);
            nova_img = fopen(filename, "w");
            count++;
        }

        if (nova_img != NULL)
        {
            fwrite(buffer, sizeof(BYTE), HEADER_SIZE, nova_img);
        }
    }
    fclose(f);
    if (nova_img != NULL)
    {
        fclose(nova_img);
    }
}


// obrir o card
// procurar na memoria algum inicio de arquivo jpeg
// se encontrado, deve abrir uma nova jpege
// gravara blocos de 512 bytes ate encontrar um novo arquivo jpeg
//

