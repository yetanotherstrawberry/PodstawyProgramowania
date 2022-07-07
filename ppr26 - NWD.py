def nwd(a, b):
    while a != b:
        if a > b:
            a = a - b
        else:
            b = b - a
    
    return a

ile_zadan = int(input())

for x in range(ile_zadan):
    liczby = [int(x) for x in input().split(' ')]
    dzielnik = liczby[0]
    for liczba in liczby:
        dzielnik = nwd(dzielnik, liczba)
    
    print(dzielnik)