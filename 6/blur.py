from PIL import Image, ImageFilter

# aplicando embassadmento
before = Image.open("arquivo.bmp)
after = before.filter(ImageFilter.BoxBlur(10))
after.save("saida.bmp")


# Filtro de
before = Image.open("bridge.bmp)
after = before.filter(ImageFilter.FIND_EDGES)
after.save("saida.bmp")

# Em python, como tem varias bibliotecas, tem uma gama de funções
# Como nesssa de detectar imagem
# primeiro baixa com pip install face_recognition

# no exemplo tem o elenco de ofice
# e outra imagem com uma pessoa especifica
