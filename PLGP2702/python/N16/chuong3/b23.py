while True:
    try:
        n = int(input("Nhap so tu nhien : "))
        s = 0
        for i in range(1, n-1):             
            if n % i == 0:
                s += 1
        if s == n:
                print("la so hoan hao" ,n)
        else:
                print("khong phai la so hoan hao", n)
                break
    except:
        print("vui long nhap lai!")