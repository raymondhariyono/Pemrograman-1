print("Input")
pertama=float(input("Masukkan Nilai Pertama:"))
kedua=float(input("Masukkan Nilai Kedua:"))

hasil= pertama + kedua

pertama = (  f"{int(pertama)}" if pertama.is_integer() else f"{pertama:.2f}")
print()
print("output")
print(f'Hasil dari penjumlahan nilai pertama "{pertama}" dan nilai kedua "{kedua}" adalah "{hasil:.2f}"')