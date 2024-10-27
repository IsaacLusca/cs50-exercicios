def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            pass

def mario(n):
    temp = n - 1
    i = 1
    while i <= n:
        print(" " * temp + "#" * i)
        i += 1
        temp -= 1


def main():
    while True:
        num = get_int("Height: ")
        if num <= 8 or num >= 1:
            mario(num)
            break

main()
