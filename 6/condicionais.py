from cs50 import get_int

x = get_int("x: ")
y = get_int("y ")


if x < y:
    print("x é menor")
elif x > y:
    print("x é maior")
else:
    print("são inguais")
