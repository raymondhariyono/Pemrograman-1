i=0;j=0
pesanAsli = input();pesanPalsu = input()
kode = len(pesanAsli);pesan = len(pesanPalsu)
if kode != pesan :
    print('panjang Kalimat Berbeda, Pesan Palsu')
else :
    for x in range(kode):
        if(pesanAsli[x]==pesanPalsu[x]):
            if (pesanAsli[x] == ' '):
                print(" ", end = " ")
            else:
                print("*", end = " ")
                i += 1
        else :
            print("#",end=" ")
            j += 1
    print("\n* =",i)
    print("# =",j)
    if(i > j):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")