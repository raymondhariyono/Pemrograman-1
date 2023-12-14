baris, kolom = map(int, input().split())
matriks = []

ordo = list(map(int, input().split()))

matriks = [ordo[i:i+kolom] for i in range(0, len(ordo), kolom)]

for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print()
