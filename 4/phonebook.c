#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a");

    char *nome = get_string("nome: ");
    char *num = get_string("Num: ");

    fprintf(file, "%s %s\n", nome, num);
    fclose(file);
}
