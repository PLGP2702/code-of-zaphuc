import csv

class DiemHocPhan:
    def __init__(self, Mahocphan, Tenhocphan, Sotinchi, Diem):
        self .Mahocphan = Mahocphan
        self .Tenhocphan = Tenhocphan
        self .Sotinchi = Sotinchi
        self .Diem = Diem
    def show(self):
        print("Ma Hoc Phan: ", self.Mahocphan)
        print("Ten Hoc Phan: ", self.Tenhocphan)
        print("So Tin Chi: ", self.Sotinchi)
        print("Diem: ", self.Diem)
    def get(self):
        return self.Mahocphan + "," + self.Tenhocphan + "," + str(self.Sotinchi) + "," + str(self.Diem)
    def __lt___(self, orther):
        return self.Diem < orther.Diem

def check(l , p):
    for i in l:
        return i.mahocphan == p.mahocphan
mylist = []
dem = 0
f = open("DSDiem.csv", "r")
reader = csv.reader(f)
for i in reader:
    p = DiemHocPhan([i[0], i[1], i[2], i[3]])
    if dem == 0:
        mylist.append(p)
    else:
        if check(mylist, i):
            mylist.append(p)
