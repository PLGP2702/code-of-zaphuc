a = 4
print(a)
print(type(a))
''''''
b = 9.6
print(b)
print(type(b))
''''''
#lấy toàn bộ nội dung của thư viên decimal
#từ thư viện decimal -> import mọi thứ (*) vào
from decimal import*
from fractions import Fraction
import fractions 
#lấy tối đa 30 chữ số phần nguyên và phần thập phân decimal
getcontext().prec = 30

f = 10/3
print(f)
print(type(f))

d = Decimal(10)/3
print(d)
print(type(d))

#-------------------------------------

#phân số 
from fractions import*

# frac = Fraction(4,5)
# print(frac)
# print(type(frac))

frac1 = fractions(6.9)
frac2 = fractions(5.10)
frac3 = frac1 + frac2
print(frac3)
