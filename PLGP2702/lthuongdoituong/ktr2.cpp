#include <bits/stdc++.h>
using namespace std;

class Canbo
{
    protected:
        string Mcb; string Hoten; string Gioitinh;
    public:
        Canbo(string Mcb, string Hoten, string Gioitinh)
        {
            this -> Mcb = Mcb;
            this -> Hoten = Hoten;
            this -> Gioitinh = Gioitinh;
        }

        Canbo()
        {
            Mcb = Hoten = Gioitinh = "";
        }

        void Nhap()
        {
            cout << "\nNhap Mcanbo: "; fflush(stdin); getline(cin, Mcb);
            cout << "\nNhap Hoten: "; fflush(stdin); getline(cin, Hoten);
            cout << "\nNhap Gioitinh: "; fflush(stdin); getline(cin, Gioitinh);
        };
 
        void Xuat()
        {
            cout << "\nMacanbo: " << Mcb;
            cout << "\nHoten: " << Hoten;
            cout << "\nGioitinh: " << Gioitinh;
        }

        string get_gioitinh()
        {
            return Gioitinh;
        }

};

class Congnhan : public Canbo
{ 
    private:
    int bac;
    int songaylamviec;
    string ngaykyhopdong;
    public:
    Congnhan(int bac, int songaylamviec, string ngaykyhopdong)
    {
        this -> bac = bac;
        this -> songaylamviec = songaylamviec;
        this -> ngaykyhopdong = ngaykyhopdong;
    }

    Congnhan()
    {
        songaylamviec = 0;
        bac = 0;
        ngaykyhopdong = "";
    }

    int tinhtienluong()
    {
        int tiencongnhat;
        if(bac == 1)
        {
            tiencongnhat = 300000 * songaylamviec;
        }
        else if(bac == 2)
        {
            tiencongnhat = 350000 * songaylamviec;
        }
        else if(bac == 3)
        {
            tiencongnhat = 400000 * songaylamviec;
        }
        return tiencongnhat;
    }

    void Nhap()
    {
        cout << "\nNhap cap bac: "; cin >> bac;
        cout << "\nNhap so ngay lam viec: "; cin >> songaylamviec;
        cout << "\nNhap ngay ky hop dong: "; fflush(stdin); getline(cin, ngaykyhopdong);
    }

    void Xuat()
    {
        Canbo::Xuat();
        cout << "\nCap bac: " << bac;
        cout << "\nSo ngay lam viec: " << songaylamviec;
        cout << "\nNgay ky hop dong: "<< ngaykyhopdong;
        cout << "Luong: " << tinhtienluong();
    }

    bool operator>(Congnhan &cn)
    {

        string ngay1, thang1, nam1;
        string ngay2, thang2, nam2;

        ngay1 = ngaykyhopdong.substr(0,1);
        thang1 = ngaykyhopdong.substr(3,4);
        nam1 = ngaykyhopdong.substr(6,9);
        ngay2 = cn.ngaykyhopdong.substr(0,1);
        thang2 = cn.ngaykyhopdong.substr(3,4);
        nam2 = cn.ngaykyhopdong.substr(6,9);

        if(nam1 == nam2)
        {
            return (ngay1 > ngay2 || thang1 > thang2);
        }
        else if(thang1 == thang2)
        {
            return (ngay1 > ngay2 || nam1 > nam2);
        }
        return (ngay1 > ngay2) || (thang1 > thang2) || (nam1 > nam2);
    }
};

void xapsep(Congnhan cn[], int m)
{
        for (int i = 0; i < m - 1; i++)
        {
            for (int g = i + 1; g < m; g++)
            
                if(cn[i]) > cn[g]{
                    Congnhan cm=cn[i];
                    cn[i] = cn[g];
                    cn[g] = cm;
                }
            }
        cout << "\n\n\tSap xep tang dan";
        int dem = 1;
        for (int i = 0; i < m; i++)
        {
            cn[i].Xuat();
        }
}

void max(Congnhan cn[], int m)
{
    int max = 0;
    cout << "\n\n\tCan bo nam va tien luong cao nhat: ";
    for (int i = 0; i < m ; i++)
    {
        if(cn[i].get_gioitinh() == "Nam" && cn[i].tinhtienluong() > max)
        {
            max = cn[i].tinhtienluong();
            cn[i].Xuat();
        }
    }
}

int main()
{
    int n;
    cout << "Nhap so cong nhan: "; cin >> n;
    Congnhan*cn = new Congnhan[50];
    for (int i = 0; i < n; i++)
    {
        cn[i].Nhap();
    }
    xapsep(cn, n);
    max(cn, n);
}