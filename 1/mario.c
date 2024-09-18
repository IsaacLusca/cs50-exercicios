#include<stdio.h>

int main(void)
{
    // int i = 0;
    // while(i <=4)
    // {
    //     printf("?");
    //     i++;
    // }
    // printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n");

    int n = 3;
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

