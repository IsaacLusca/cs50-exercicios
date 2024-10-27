

def main():
    n = int(input("Height: "))

    temp = n - 1
    i = 1
    while i <= n:
        print(" " * temp + "#" * i)
        i += 1
        temp -= 1

main()
