while i != 1:
    try: 
        n = int(input("Nhap so giay: "))
        h = n/3600
        p = (n%3600)//60
        g = (n%3600)%60
        print(h, "gio",p ,"phut",g ,"giay")
        i = 1
    except:
        print("khong hop le, nhap lai!")