n, m = map(int, input().split())
hasil = 0
baris = 0
for i in range(1, n+1):
    for j in range(i, 0, -1):
        if j > 1:
            hasilTunggal = j * m
            baris += hasilTunggal
            print(f"({j}*{m}) + ", end="")
        elif j == 1:
            hasilTerakhir = j * m
            baris += hasilTerakhir
            print(f"({j}*{m}) = {baris}")
            hasil += baris
            baris = 0
print(hasil)