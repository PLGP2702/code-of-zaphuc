#include <bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string id, ten, ngaysinh;
        double diem;
    public:
        SinhVien();
        SinhVien(string, string, string, double);
        void xuat();
        void nhap();
        // void xinchao();
        // void dihoc();
        ~SinhVien();
};

SinhVien::SinhVien()
{
    cout <<"doi tuong mac dinh duoc tao o day\n";
    id = ten = ngaysinh = " ";
    diem = 0;
}

SinhVien::SinhVien(string id, string ten, string ngaysinh, double diem)
{
    cout << "ham khoi tao co tham so duoc goi\n";
    id = id;
    ten = ten;
    ngaysinh = ngaysinh;
    diem = diem;

}

SinhVien::~SinhVien()
{
    cout <<"Doi tuong duoc huy tai day !\n";
}

// void SinhVien::xinchao()
// {
//     cout << "hello\n";
// }

// void SinhVien::dihoc()
// {
//     cout << "Di hoc\n";
// }

void SinhVien::nhap()
{
    cout << "Nhap id: "; cin >> id;
    cin.ignore();
    cout << "Nhap ten: "; cin >> ten; getline(cin, ten);
    cout << "Nhap ngay sinh: "; cin >> ngaysinh;
    cout << "Nhap diem: "; cin >> diem;
}

void SinhVien::xuat()
{
    cout << id << " " << ten << "\n" << ngaysinh << "\n" << fixed << setprecision(2) << diem << endl; 
}

void abc()
{
    SinhVien x;
}

int main()
{
    SinhVien x;
    x.nhap();
    x.xuat();

    // abc();
    // cout << "Xin chao !\n";
    // if(1)
    // {
    //     SinhVien x;
    // }
    // cout << "Hello \n";
    
    // SinhVien x("123", "nguyen van a ", "12/12/2022", 3.14);
    // x.xinchao();
    // x.dihoc();
    return 0;
}

