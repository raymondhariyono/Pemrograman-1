for i in range(5):
    bilangan = int(input())

    if bilangan >= 1 and bilangan <= 10:
        print("Satuan")
    elif bilangan >= 11 and bilangan <= 19:
        print("belasan")
    elif bilangan >= 20 and bilangan <= 99:
        print("Puluhan")
    elif bilangan > 99:
        print("Anda Menginput Melebihi Limit Bilangan")
    elif bilangan == 0:
        print("Nol")
