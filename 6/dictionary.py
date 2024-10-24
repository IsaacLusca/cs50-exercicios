# função chek(), load, size e unload do desafio 5 speller

words = set()  # Cria um conjunto vazio chamado 'words' que impede duplicatas.

def check(word):
    return word.lower() in words  # Retorna True se a palavra (em minúsculas) está no conjunto 'words'.

def load(dictionary):
    # Abre o arquivo especificado pelo 'dictionary' para leitura:
    with open(dictionary) as file:
        words.update(file.read().splitlines())  # Lê cada linha do arquivo e adiciona ao conjunto 'words'.
    return True  # Retorna True indicando que o dicionário foi carregado com sucesso.

def size():
    return len(words)  # Retorna o número de palavras no conjunto 'words'.

def unload():
    return True  # Não faz nada específico aqui, mas retorna True para indicar sucesso na operação.
