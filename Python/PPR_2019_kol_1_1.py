ile_testow = int(input())
testy = []
for x in range(ile_testow):
    ile_liter_na_koniec = int(input())
    slowo = input()
    testy.append({"ile_liter_na_koniec": ile_liter_na_koniec, "slowo": slowo})

for test in testy:
    print(test.get("slowo")[test.get("ile_liter_na_koniec")::1], test.get("slowo")[0:test.get("ile_liter_na_koniec"):1], sep='')