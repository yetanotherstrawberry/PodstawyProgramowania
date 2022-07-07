jeden = []
temp_jeden = input().lower()
for x in range(0, len(temp_jeden)):
    jeden.append(temp_jeden[x])
dwa = []
temp_drugi = input().lower()
for x in range(0, len(temp_drugi)):
    dwa.append(temp_drugi[x])
litery_jeden = []
litery_dwa = []
for litera in jeden:
    if not litera in litery_jeden and litera != ' ':
        litery_jeden.append(litera)
for litera in dwa:
    if not litera in litery_dwa and litera != ' ':
        litery_dwa.append(litera)
litery_jeden.sort()
litery_dwa.sort()
if litery_jeden == litery_dwa:
    print("TAK")
else:
    print("NIE")