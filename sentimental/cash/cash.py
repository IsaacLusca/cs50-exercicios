from cs50 import get_float

A = 0.01
B = 0.05
C = 0.10
D = 0.25

def main():

    while True:
        valor = get_float("Numero: ")

    moeda = 0

    while valor >= D:
        moeda += 1;
        valor -= D

    while valor >= C:
        moeda += 1;
        valor -= C

    while valor >= B:
        moeda += 1;
        valor -= B

    while valor >= A:
        moeda += 1;
        valor -= A

    print(f"{moeda}")

main()


# #include <cs50.h>
# #include <stdio.h>

# #define A 1
# #define B 5
# #define C 10
# #define D 25

# int main(void)
# {
#     int valor;
#     int moeda = 0;
#     int n;

#     do
#     {
#         valor = get_int("Change owed: ");
#     }
#     while (valor < 1);

#     // Algoritmo guloso, vai verificando do maior valor até o menor.
#     while (valor >= D)
#     {
#         moeda++;
#         valor -= D;
#     }

#     while (valor >= C)
#     {
#         moeda++;
#         valor -= C;
#     }

#     while (valor >= B)
#     {
#         moeda++;
#         valor -= B;
#     }

#     while (valor >= A)
#     {
#         moeda++;
#         valor -= A;
#     }

#     printf("%i\n", moeda);
# }
