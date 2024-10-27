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

    for i in range(n):
        print("#")

main()

