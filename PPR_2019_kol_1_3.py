pole = int(input())
ile_prostokatow = int(input())
prostokaty = []
for x in range(0, ile_prostokatow):
    tmp = input().split(' ')
    a = tmp[0]
    b = tmp[1]
    prostokaty.append({"a": int(a), "b": int(b)})
ile_ma_mniejsze_pole = 0
for prostokat in prostokaty:
    temp1 = prostokat.get("a")
    temp2 = prostokat.get("b")
    temp = temp1 * temp2
    if temp < pole:
        ile_ma_mniejsze_pole = ile_ma_mniejsze_pole + 1
print(ile_ma_mniejsze_pole, end='')