#include <bits/stdc++.h>
using namespace std;

class Nguoi
{
    private:
        string HoDem;
        string NgaySinh;
        string Ten;
    public:
        Nguoi()
        {
            this->HoDem = this->NgaySinh = this->Ten ="";
        }

        Nguoi(string HoDem, string NgaySinh, string Ten)
        {
            this-> HoDem = HoDem;
            this-> NgaySinh = NgaySinh;
            this-> Ten = Ten;
        }
        
        ~Nguoi()
        {
            this->HoDem = this->NgaySinh = this->Ten ="";
        }

        void Nhap()
        {
            cout << "\nNhap HoDem: "; fflush(stdin); getline(cin, HoDem);
            cout << "\nNhap Ngaysinh: "; fflush(stdin); getline(cin, NgaySinh);
            cout << "\nNhap Ten: "; fflush(stdin); getline(cin, Ten);
        }

        void Xuat()
        {
            cout << "\nHoDem: " << HoDem;
            cout << "\nNgaySinh: " << NgaySinh;
            cout << "\nTen: " << Ten;
        }
};

class SinhVien : public Nguoi
{
    private:
        string Msv;
        float Dtb;
    public:
        SinhVien()
        {
            this->Msv = "";
            this->Dtb = 0;
        }

        SinhVien(string Msv, float Dtb)
        {
            this->Msv = Msv;
            this->Dtb = Dtb;
        }

        ~SinhVien()
        {
           this->Dtb = this->Msv = "";
        }
        
        void Nhap()
        {
            Nguoi::Nhap();
            cout << "\nNhap Msv: "; fflush(stdin); getline(cin, Msv)
            cout << "\nNhap Dtb: "; fflusj(stdin); getline(cin, Dtb);
        }

        void Xuat()
        {
            Nguoi::Xuat();
            cout << "\nMsv: " << Msv;
            cout << "\nDtb: " << Dtb;
        }

        bool operator>(SinhVien &student)
        {
            if(this->Msv > student.Msv && this->Dtb > student.Dtb)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

void swap()
{
    for ()
    {
        for ()
        {
            if()
            {
                    
            }
        }
        
    }
    
}

int main()
{
    
}