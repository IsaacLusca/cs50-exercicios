def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            pass

def main():
    while True:
        n = get_int("Digite o tamanho da grade: ")
        if n > 0:
            break

    temp = n
    i = 0
    while i != temp:
        print("#" * temp)
        temp -= 1

    print()
    print()

    for l in range(n):
        for j in range(n):
            print("#", end="")
        print()
main()

