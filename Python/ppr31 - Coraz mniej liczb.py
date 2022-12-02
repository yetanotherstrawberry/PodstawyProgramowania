ileliczb = int(input())
liczby = [int(x) for x in input().split(' ')]
iledousuniecia = int(input())
dousuniecia = [int(x) for x in input().split(' ')]
for liczbadousuniecia in dousuniecia:
    while liczbadousuniecia in liczby:
        liczby.remove(liczbadousuniecia)
    print(*liczby)