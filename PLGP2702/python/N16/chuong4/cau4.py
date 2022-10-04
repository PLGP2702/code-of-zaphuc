#bai4
#CAU A
def uocso(n):
    ans = 0
    for i in range(1, n):
        if n % i == 0:
            ans += 1
    return ans
n = int(input("Nhap n:"))
print("Cau A:",uocso(20))
#CAU B
def snt(n):
    dem = 0
    for i in range (1,n):
        if  n % i == 0: dem = dem + 1
    if dem != 1: return 0
    else : return 1 
print("Cau B:", snt(n))
# #CAU C
def uocsole(n):
    cnt = 0
    for i in range(1, n+1):
        if n % i == 0 and i % 2 == 1:
            cnt += 1
    return cnt
print("Cau C:", uocsole(n))
#CAU D
def uocsonguyento(n):
    def snt(k):
        if k < 2:
            return 0
        for i in range(2, k):
            if k % i == 0:
                return 0
        return 1
    dem = 0
    for j in range (1,n+1):
        if n % j == 0 and snt(j) == 1:
            dem += 1
    return dem
print("Cau D:",uocsonguyento(n))
#CAU E
def uocsothucsu(n):
    ans = 0
    for i in range(1, n):
        if n % i == 0:
            ans += i
    return ans
print("Cau E:",uocsothucsu(n))