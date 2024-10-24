from PIL import Image, ImageFilter

before = Image.open("arquivo.bmp)
after = before.filter(ImageFilter.BoxBlur(10))
after.save("saida.bmp")
