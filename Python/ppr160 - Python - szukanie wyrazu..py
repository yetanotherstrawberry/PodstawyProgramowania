caly = """Three Rings for the Elven-kings under the sky,
Seven for the Dwarf-lords in their halls of stone,
Nine for Mortal Men doomed to die,
One for the Dark Lord on his dark throne
In the Land of Mordor where the Shadows lie."""
indeks = caly.find(input())
ile = 1
if indeks == -1:
    print("Nie znaleziono")
else:
    for x in range(0, indeks):
        if caly[x] == " " or caly[x] == "\n":
            ile = ile + 1
    print(ile)