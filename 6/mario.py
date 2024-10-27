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

    i = 1
    while i != n:
        print("#" * i)
        i += 1

main()

