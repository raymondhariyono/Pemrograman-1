
hargaSepatuA = int(input("Harga sepatu A adalah "))
hargaSepatuB = int(input("Harga sepatu B adalah "))

diskonA = 0.13
diskonB = 0.21

hargadiskonA = hargaSepatuA - hargaSepatuA * diskonA
hargadiskonB = hargaSepatuB - hargaSepatuB * diskonB

print(f"Sepatu A mendapat diskon 13%% sehingga harganya menjadi {hargadiskonA:.0f}")
print(f"Sepatu B mendapat diskon 21%% sehingga harganya menjadi {hargadiskonB:.0f}")