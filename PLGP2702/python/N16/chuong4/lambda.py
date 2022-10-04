cau1 = lambda x, y, z: x + y + z
cau2 = lambda x, y, z: x**(y + z)
cau3 = lambda x, y: (x + y)**2
x=int(input("Nhap x: "))
y=int(input("Nhap y: "))
z=int(input("Nhap z: "))

print("1)x + y + z:",cau1(x, y, z))
print("2)x**(y + z):",cau2(x, y, z))
print("3)(x + y)**2:" ,cau3(x, y))
