def maksimal(a, b):
    return a if b < a else b

def minimal(a, b):
    return a if a < b else b

batas = 0
maks = -100000
minim = 100000
bilangan = int(input())
while batas < bilangan:
    nilai = int(input())
    maks = maksimal(maks, nilai)
    minim = minimal(minim, nilai)
    batas += 1

print(maks, minim)

