lista = input().split(" ")
min = int(lista[0])

for x in lista:
    if int(x) < min:
        min = int(x)

print(min)