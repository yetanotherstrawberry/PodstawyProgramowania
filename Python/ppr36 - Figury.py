import math

ile_wierzcholkow = int(input())
wierzcholki = []
obwod = 0
suma_modulow = 0

for petla in range(ile_wierzcholkow):
    x, y = input().split(' ')
    wierzcholki.append({"x": int(x), "y": int(y)})

for wierzcholek in wierzcholki:
    suma_modulow = suma_modulow + (math.sqrt(wierzcholek.get("x")**2 + wierzcholek.get("y")**2))

for i in range(0, ile_wierzcholkow):
    if i < ile_wierzcholkow - 1:
        obwod = obwod + math.sqrt((wierzcholki[i+1].get("x") - wierzcholki[i].get("x"))**2 + (wierzcholki[i+1].get("y") - wierzcholki[i].get("y"))**2)
    else:
        obwod = obwod + math.sqrt((wierzcholki[0].get("x") - wierzcholki[i].get("x"))**2 + (wierzcholki[0].get("y") - wierzcholki[i].get("y"))**2)

print("{0:.3f} {1:.3f}".format(round(obwod, 3), round(suma_modulow, 3)))