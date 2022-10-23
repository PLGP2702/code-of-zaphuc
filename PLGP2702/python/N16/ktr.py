# Câu 3:
i = 0
while i != 1:
    try:
        def check_date(nam, thang, ngay ):
            if(nam >= 1):
                return True
            if(thang >= 1 and thang <= 12):
                return True
            elif (ngay >= 1 and ngay <= 31):
                return True 
            else:
                return False
        yyyy = int(input("nam: "))
        mm = int(input("thang: "))
        dd = int(input("ngay: "))
        if check_date(yyyy, mm, dd) == True:
                print("True")
        else:
                print("False")
        yyyy -= (14 - mm) // 12
        mm += 12 * ((14 - mm) // 12) - 2
        thu = (dd + yyyy + yyyy // 4 - yyyy // 100 + yyyy // 400 + (31 * mm) // 12) % 7
        if check_date(yyyy, mm, dd) == True:
            if thu == 0:
                print(yyyy,"/", mm  + 2, "/", dd, "la chu nhat")
            if thu == 1:
                print(yyyy,"/", mm  + 2, "/", dd, "la thu 2")
            if thu == 2:
                print(yyyy,"/", mm  + 2, "/", dd, "la thu 3")
            if thu == 3:
                print(yyyy,"/", mm  + 2, "/", dd, "la thu 4")
            if thu == 4:
                print(yyyy,"/", mm  + 2, "/", dd, "la thu 5")
            if thu == 5:
                print(yyyy,"/", mm  + 2, "/", dd, "la thu 6")
            if thu == 6:
                print(yyyy,"/", mm  + 2, "/", dd, "la thu 7")
            i = 1
    except:
        print("cu phap khong hop le, vui long nhap lai")