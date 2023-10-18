print("input")

r,t = map(float, input().split())
        
phi = 3.142857

volume = phi * r ** 2 * t
luas = 2* phi * r * (r+t)
keliling = 2 * phi * r
print()
print("Output")
print(f"Alas = {volume:.2f}")
print(f"Tinggi = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")