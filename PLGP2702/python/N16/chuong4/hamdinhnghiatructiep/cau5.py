def f(m, n): 
    min = 0
    if(m >= n):
        min = n
    else:
        min = m
    cntA = cntB = sum = 0
    for i in range(1, min + 1):
        if(m % i == 0 and n % i == 0):
            cntA += 1
            sum += 1
    for i in range(1 , m + 1):
        if(m % i == 0 and n % i == 1):
            cntB += 1
    print("a)", cntA)
    print("a)", cntB)
    print("c)", sum)
m = int(input("Nhap m: "))
n = int(input("Nhap n: "))
f(m, n)

