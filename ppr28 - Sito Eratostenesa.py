max_liczba = 1000000
liczby = [True for x in range(max_liczba + 1)]
liczby[0] = False
liczby[1] = False
x = 2
while x*x <= max_liczba:
    y = 2
    if liczby[x]:
        while(x*y <= max_liczba):
            liczby[x*y] = False
            y += 1
    x += 1
for i in range(int(input())):
    if liczby[int(input())]:
        print("T")
    else:
        print("N")