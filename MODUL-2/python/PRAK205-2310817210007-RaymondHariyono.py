import math
print("Input")
a,b = map(int, input().split())

alas = int(math.sqrt(b**2 - a**2))
tinggi = a
keliling = a + b + alas
luas = 0.5 * alas * tinggi

print()
print("Output")
print(f"Alas = {alas}")
print(f"Tinggi = {tinggi}")
print(f"Keliling = {keliling}")
print(f"Luas = {luas:.0f} cm^2")