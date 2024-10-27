def get_int(prompt):
    While True:
        try:
            return int(intput(prompt))
        except ValueError:
            pass

def main():
    n = get_int("Digite o tamanho da grade: ")

    for i
