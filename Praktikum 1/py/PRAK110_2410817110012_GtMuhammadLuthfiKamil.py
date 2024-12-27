import math

alas = 5
tinggi = 12
luas = alas * tinggi / 2
miring = math.sqrt(alas*alas + tinggi*tinggi)
keliling = alas + tinggi + miring

print("Diketahui :")
print("Alas = %d cm" %(alas))
print("Tinggi = %d cm" %(tinggi))
print("")
print("Jawab :")
print("Sisi A = %d cm" %(tinggi))
print("Sisi B = %d cm" %(miring))
print("Sisi C = %d cm" %(alas))
print("Keliling = %d cm" %(keliling))
print("Luas = %d cm" %(luas))
