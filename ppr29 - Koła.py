import math

def poleKola(r):
    return 3.14 * (r**2)

def liczOdleglosc(x1, x2, y1, y2):
    return math.sqrt((x2 - x1)**2 + (y2 - y1)**2)

ile_kol = int(input())
kola = []

for x in range(ile_kol):
    y, x, promien = input().split(' ')
    kola.append({"y": int(y), "x": int(x), "promien": int(promien)})

ile_par = int(input())
pary = []
for x in range(ile_par):
    a, b = input().split(' ')
    pary.append({"a": int(a) - 1, "b": int(b) - 1})

for para in pary:
    pole_a = poleKola(kola[para.get("a")].get("promien"))
    pole_b = poleKola(kola[para.get("b")].get("promien"))
    odleglosc = liczOdleglosc(kola[para.get("b")].get("x"), kola[para.get("a")].get("x"), kola[para.get("b")].get("y"), kola[para.get("a")].get("y"))
    
    if pole_a > pole_b:
        print("{0:.2f} {1:.2f}".format(odleglosc, pole_a))
    else:
        print("{0:.2f} {1:.2f}".format(odleglosc, pole_b))