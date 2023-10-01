import math

alas = int(input ("masukkan alas "))
tinggi = int(input ("masukkan tinggi "))
sisiA = tinggi 
sisiB = int(math.sqrt(alas**2 + tinggi**2))
sisiC = alas

keliling = sisiA + sisiB + sisiC
luas = 0.5 * alas * tinggi

print("diketahui : ")
print(f"alas = {alas} cm")
print(f"tinggi = {tinggi} cm")
print("jawab : ")
print(f"sisi A = {sisiA} cm")
print(f"sisi B = {sisiB} cm")
print(f"sisi C = {sisiC} cm")
print(f"keliling = {keliling} cm")
print(f"luas = {luas:.0f} cm")