import math

def mutlak(angka):
    return -angka if angka < 0 else angka

def hitung(nilai1, nilai2):
    return mutlak(nilai1 - nilai2)

a, c, b, d = map(int, input().split())


Hasil = hitung(a, b) + hitung(c, d)
print(mutlak(Hasil))

