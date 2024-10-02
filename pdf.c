#include <cs50.h>
#include <stdio.h>
#include<stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    char *filename = argv[1];
    if (argv[1] != 1)
    {
        printf("Comando inválido.");
        return 1;
    }

    FILE *f = fopen(filename, "r");

    BYTE buffer[4];
    fread(buffer, 1, 4, f);

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", buffer[i]);
    }
    fclose(f);
}
