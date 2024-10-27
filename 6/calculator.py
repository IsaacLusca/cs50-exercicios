def get_int(prompt):
    
    return int(input(prompt))

def main():
    x = get_int("X: ")
    y = get_int("Y: ")

    z = x / y
    print(z)

main()
