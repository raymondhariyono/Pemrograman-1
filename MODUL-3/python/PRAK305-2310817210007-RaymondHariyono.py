for i in range(5):
    detik = int(input(""))

    hari = detik // 86400
    detik %= 86400
    jam = detik // 3600
    detik %= 3600
    menit = detik // 60
    detik %= 60

    if hari > 0:
        print(f"{hari:02d} hari {jam:02d}:{menit:02d}:{detik:02d}")
        print()
    else:
        print(f"{jam:02d}:{menit:02d}:{detik:02d}")
        print()