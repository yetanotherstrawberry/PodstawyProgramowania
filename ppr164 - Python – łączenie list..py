lista1 = input().split(' ')
lista2 = input().split(' ')
gotowa_lista = []

for x in lista1:
    for y in lista2:
        gotowa_lista.append(x + " " + y)

for z in range(0, len(gotowa_lista)):
    if z % len(lista2) == 0 and z > 0:
        print("----------")
    print(gotowa_lista[z])
