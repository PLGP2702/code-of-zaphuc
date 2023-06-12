#include <bits/stdc++.h>
using namespace std;

class Printer
{
    protected:
    string Name;
    int Soluong;
    public:
    Printer()
    {
        this->Name="";
        this->Soluong = 0;
    }
    void nhapkho()
    {
        cout << "\nNhap ten: "; fflush(stdin); getline(cin, this->Name);
        cout << "\nNhap so luong: "; cin >> this->Soluong;
    }
    void xuatkho()
    {
        cout << "\nTen: " << this->Name;
        cout << "\nSoluong: " << this->Soluong;
    }
};

class Laser : public Printer
{
    private:
    int Dpi;
    public:
    void nhapkho()
    {
        Printer::nhapkho();
        cout << "\nNhap Dpi: "; cin >> this->Dpi;
    }
    void xuatkho()
    {
        Printer::xuatkho();
        cout << "\nDpi: " << this->Dpi;
    }
};

class ColorPrinter : public Printer
{
    private:
        string color;
    public:
    void nhapkho()
    {
        cout << "\nNhap mau: "; fflush(stdin); getline(cin, this->color);
    }
    void xuatkho()
    {
        cout << "\nMau: " << this->color;
    }
};

class Colorlaser : public Laser , public ColorPrinter
{
    private:

    public:
    void nhapkho()
    {
        Laser::nhapkho();
        ColorPrinter::nhapkho();
    }
    void xuatkho()
    {
        Laser::xuatkho();
        ColorPrinter::xuatkho();
    }
};

void xuat_ds_mayin(Colorlaser ds_mayin[], int n)
{
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << "\nThong tin may in thu: " << dem++;
        ds_mayin[i].xuatkho();
    }

}

void menu(Colorlaser ds_mayin[], int n)
{
    int luachon;
    while (true)
    {
        /* code */
        system("cls");
        cout << "\n\n\t\t===============QUAN LY MUC BAN SACH===============";
        cout << "\n\t1. Nhap danh sach may in";
        cout << "\n\t2. Xuat danh sach may in";
        cout << "\n\t3. Thoat.";
        cout<<"\n\t\t=======================END========================";

        cout << "\nNhap lua chon: "; cin >> luachon;
        if(luachon == 1)
        {
            Colorlaser x;
            x.nhapkho();
            ds_mayin[n] = x;
            n++;
            system("pause");
        }
        else if(luachon == 2)
        {
            xuat_ds_mayin(ds_mayin, n);
            system("pause");
        }
        else if(luachon == 3)
        {
            break;
        }
    }
}

int main()
{   
    Colorlaser ds_mayin[100];
    int n = 0;
    menu(ds_mayin, n);
    return 0;
}


