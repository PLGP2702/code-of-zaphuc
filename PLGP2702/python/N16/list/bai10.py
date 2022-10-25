a = int(input("Nhap so luong phan tu: "))
list = []
for i in range(a):
    list.append(int(input("Nhap gia tri phan tu: ")))
cnt = 0 
for i in list:
    cnt += i
print(cnt)