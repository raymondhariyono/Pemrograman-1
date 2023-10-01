print("diketahui: ")
putaran = float(input("Pak Dengklek mengelilingi taman = "))
jarak = float(input("Jarak tempuh Pak Dengklek = "))

keliling = jarak / putaran
jariJari = keliling / (2 * 3.14)

print("diketahui")
print(f"Pak Dengklek mengelilingi taman {putaran:.0f} putaran")
print(f"jarak tempuh Pak Dengklek {jarak:.0f} kilometer")
print("jawaban :")
print(f"Jari-jari taman yang dikelilingi Pak Dengklek adalah {jariJari:.2f} kilometer")