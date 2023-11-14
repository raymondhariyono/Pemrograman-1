batas1,batas2 = (input().split())
batas1 = int(batas1)
batas2 = int(batas2)
if batas1 > batas2:
    for i in range(batas2, batas1+1):
        print(i, batas1 + batas2 - i, end=" - ")
else:
    for i in range(batas2, batas1-1, -1):
        print(i, batas1 + batas2 - i, end=" - ")

