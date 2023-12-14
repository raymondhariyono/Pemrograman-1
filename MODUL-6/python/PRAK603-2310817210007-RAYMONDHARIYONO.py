jumlahBaris = 2
banyakAngka, banyakAngkaBaris = map(int, input().split())
if banyakAngka == banyakAngkaBaris:
    arr1 = []

    for i in range(jumlahBaris):
        arr1.append(list(map(int, input().split())))
        
    for i in range(jumlahBaris - 1):
        for j in range(banyakAngka):
            if i + 1 < jumlahBaris:
                arr1[i][j] = arr1[i][j] * arr1[i + 1][j]

    for i in range(jumlahBaris - 1):
        for j in range(banyakAngka):
            print(arr1[i][j], end=" ")

else:
    print("Jumlah Tidak Sama")