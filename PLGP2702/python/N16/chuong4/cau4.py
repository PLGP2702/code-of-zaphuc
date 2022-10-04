#bai4
'''cau a'''
def uocso(n):
    ans = 0
    for i in range(1, n):
        if n % i == 0:
            ans += 1
    return ans
print(uocso(10))
'''cau b'''
def snt(n):
    dem = 0
    for i in range (1,n):
        if  n % i == 0: dem = dem + 1
    if dem != 1: return 0
    else : return 1 
n = int(input())
print (snt(n))
    