ruangan = int(input(""))
baris1 = list(map(int,input().split()))
baris2 = []

for i in range(ruangan):
    zetsu = baris1[i] *  (i + 1)
    baris2.append(zetsu)

for j in range(ruangan):
    print(baris2[j], end=" ")