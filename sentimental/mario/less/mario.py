def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            pass

def main():
    while True:
        n = get_int("Height: ")
        if n > 8 and n < 1:
            break

    temp = n - 1
    i = 1
    while i <= n:
        print(" " * temp + "#" * i)
        i += 1
        temp -= 1

main()
