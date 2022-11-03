n = int(input("Nhap n:"))
mylist = []
for i in range(1,n):
    if n%i == 0:
        mylist.append(i)
print(mylist)