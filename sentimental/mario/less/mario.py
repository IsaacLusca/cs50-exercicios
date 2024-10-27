def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            pass

def main():
    n = get_int("Height: "))

    temp = n - 1
    i = 1
    while i <= n:
        print(" " * temp + "#" * i)
        i += 1
        temp -= 1

main()
