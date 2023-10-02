a = int(input("nilai a "))
b = int(input("nilai b "))
c = int(input("nilai c "))

keliling = a + b + c
hargaTanah = 85000
biayaDiperlukan = keliling * hargaTanah

print("diketahui : ")
print(f"Panjang sisi segitiga berturut-turut adalah {a}, {b} dan {c}") 
print(f"Keliling Tanah Pak Dengklek adalah {keliling}")
print(f"Harga tanah Per Meter adalah {hargaTanah} ")
print("jawaban : ")
print(f"Biaya yang diperlukan Pak Dengklek adalah : Rp {biayaDiperlukan}")
