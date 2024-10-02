#include <cs50.h>
#include <stdio.h>
#include<stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argv[1] == NULL)
    {
        printf("Entrada inválida.");
        return 
    }
    char *filename = argv[1];

    FILE *f = fopen(filename, "r");
    if (f == NULL)
    {
        printf("Tem nada ai não\n");
        return 2;
    }

    BYTE buffer[4];
    fread(buffer, 1, sizeof(buffer), f);

    for (int i = 0; i < sizeof(buffer); i++)
    {
        printf("%i\n", buffer[i]);
    }
    fclose(f);
}
