import math

def przeciwprostokatna(liczba):
    return math.sqrt(liczba.get("a")**2 + liczba.get("b")**2)

ile = int(input())
liczby = []

for x in range(0, ile):
    a, b = input().split(' ')
    liczby.append({"a": int(a), "b": int(b)})

for liczba in liczby:
    alfa = math.degrees(math.asin(liczba.get("a") / przeciwprostokatna(liczba)))
    beta = math.degrees(math.asin(liczba.get("b") / przeciwprostokatna(liczba)))
    if alfa < beta:
        kat = alfa
    else:
        kat = beta
    print(math.ceil(przeciwprostokatna(liczba)), round(kat))