from unittest import result

a = 'my team is %s %s year old'%('18','+1')
print(a)
#---------------------------------
b = '%s %s'
result = b %('D', '2')
print(result)
#---------------------------------
name = 'zaphuc'
address = '53/1 Pham thi lien'
phone = '0915729726'
result = f'Student: {name}\naddress: {address}\nphone: {phone}'
print(result)