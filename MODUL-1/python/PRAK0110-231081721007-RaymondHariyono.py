import math

print("diketahui : ")
alas = int(input ("alas= "))
tinggi = int(input ("tinggi= "))
sisiA = tinggi 
sisiB = int(math.sqrt(alas**2 + tinggi**2))
sisiC = alas

keliling = sisiA + sisiB + sisiC
luas = 0.5 * alas * tinggi

print("jawab : ")
print(f"sisi A = {sisiA} cm")
print(f"sisi B = {sisiB} cm")
print(f"sisi C = {sisiC} cm")
print(f"keliling = {keliling} cm")
print(f"luas = {luas:.0f} cm")