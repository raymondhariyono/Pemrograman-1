while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = int(input("Masukkan Pilihan: "))
    if pilihan == 5:
        print("Terimakasih, telah menggunakan kalkulator Raymond Hariyono")
        break
    elif pilihan < 5 and pilihan > 0:
        angka1 = float(input("masukkan angka pertama:"))
        angka2 = float(input("masukkan angka kedua:"))
        if pilihan == 1:
            hasil = angka1 + angka2
            print(f"Hasil penjuumlahan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
        elif pilihan == 2:
            hasil = angka1 - angka2
            print(f"Hasil pengurangan antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
        elif pilihan == 3:
            hasil = angka1 * angka2
            print(f"Hasil perkalian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
        elif pilihan == 4:
            hasil = angka1 / angka2
            print(f"Hasil pembagian antara {angka1:.2f} dengan {angka2:.2f} adalah {hasil:.2f}")
    else:
        print("Input anda salah, silahkan coba lagi")

