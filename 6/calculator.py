def get_int(prompt):
    try:
        return int(input(prompt))
    except ValueError:
        print("Isso parece um inteiro para você?")

def main():
    x = get_int("X: ")
    y = get_int("Y: ")

    z = x / y
    print(z)

main()
