#include <cs50.h>
#include <stdio.h>


int main(void)
{

}

int collatz(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return collatz ;
    }

    return n;
}
