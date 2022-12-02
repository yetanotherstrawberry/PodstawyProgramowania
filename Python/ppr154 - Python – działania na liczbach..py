lista = input().split(" ")
min = int(lista[0])
max = int(lista[0])

for x in lista:
    if int(x) > max:
        max = int(x)
    if int(x) < min:
        min = int(x)

print(min*max)