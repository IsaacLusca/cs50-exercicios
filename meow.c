#include<stdio.h>
#include<cs50.h>

void meow(int n);

int main(void)
{
        meow(10);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow\n");
    }
}





// int main(void)
// {
//     for (int i = 0; i < 3; i++)
//     {
//         printf("Meow\n");
//     }
// }


// int main(void)
// {
//     int i = 0;
//     while( i < 3)
//     {
//         printf("meow\n");
//         i++;
//     }
//     printf("%i\n", i);
// }
