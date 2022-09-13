n = 'zaPhucH'
# x = n[len(n) - 1]
# x = n[1:len(n)]
x = n[None::2]
y = x in n 
#in
print(y)
print(type(y))
print(x)
#-----------------------------
strA = float("6.9") + 5
strB = str(65) + "5"
print(strA)
print(strB)
#-----------------------------
strC = "howkteam.com"
strC = strC[None:1] + "0" + strC[2:None]
print(hash(strC))