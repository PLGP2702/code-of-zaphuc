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

        friend istream &operator>>(istream &is, Nguoi &obj)
        {
            cout <<"\nNhap HoDem: "; fflush(stdin); getline(is, obj.HoDem);
            cout <<"\nNhap NgaySinh: "; fflush(stdin); getline(is, obj.NgaySinh);
            cout <<"\nNhap Ten: "; fflush(stdin); getline(is, obj.Ten);
            return is;
        }

        friend ostream &operator<<(ostream &os, Nguoi &obj)
        {
            os <<"Ho dem: " << obj.HoDem;
            os <<"Ngay sinh: " << obj.NgaySinh;
            os <<"Ten: " << obj.Ten;
            return os;
        }
        
        bool operator>(Nguoi &obj)
        {
            if(this->Ten > obj.Ten && this->HoDem > obj.HoDem)
            {
                return true;
            }
            else
            {
                return false;
            }
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

        friend istream &operator<<(istream &is, SinhVien &student)
        {
            cout <<"\nNhap msv: "; fflush(stdin); getline(is, student.Msv);
            cout <<"\nNhap dtb: "; fflush(stdin); getline(is, student.Dtb);
            return is;
        }

        friend ostream &operator>>(ostream &os, SinhVien &student)
        {
            os <<"\nmsv: " << student.Msv;
            os <<"\ndtb: " << student.Dtb;
            return os;
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

int main()
{

}