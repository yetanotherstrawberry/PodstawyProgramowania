ile = int(input())
lista_znajomych={}
while ile>0:
    znajomy = input().split()
    lista_znajomych.update({znajomy[0] : znajomy[1]})
    ile-=1
litera = input()
for k, v in lista_znajomych.items():
    if litera == 'p':
        print(k)
    elif litera == 'g':
        if v != 'p':
            print(k)
    elif litera == 's':
        if v != 'p' and v != 'g':
            print(k)
    else:
        if v == 'w':
            print(k)