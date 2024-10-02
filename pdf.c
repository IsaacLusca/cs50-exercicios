#include <cs50.h>
#include <stdio.h>
#include<stdint.h>

int main(int argc, char *argv[])
{
    char *filename = argv[1];
    if (argv[1] != 1)
    {
        printf("Comando inválido.");
        return 1;
    }

    fopen(filename, "")
}
