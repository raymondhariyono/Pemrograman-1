def Biodata(tahunLahir, nama, asalKota):
    tahun_sekarang = 2023
    usia = tahun_sekarang - tahunLahir
    print("Perkenalkan Nama Saya", nama)
    print("Umur saya", usia)
    print("Saya Adalah Angkatan:", tahun_sekarang)
    print("Asal Saya dari", asalKota)
    
tahunLahir = int(input())
Namaku = input()
Asal = input()

Biodata(tahunLahir, Namaku, Asal)

