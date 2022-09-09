a = 4
print(a)
print(type(a))
''''''
b = 9.6
print(b)
print(type(b))
''''''
#lấy toàn bộ nội dung của thư viên decimal
from decimal import* 
#lấy tối đa 30 chữ số phần nguyên và phần thập phân decimal
getcontext().prec = 30

print(Decimal(10)/Decimal(3))