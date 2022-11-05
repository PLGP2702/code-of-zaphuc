#include <bits/stdc++.h>
using namespace std;

class Printer
{
    private:
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
        cout << "Nhap ten: "; fflush(stdin); getline(cin, this->Name);
        cout << "Nhap so luong: "; cin >> this->Name;
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

class ColorPrinter : Printer
{
    private:
        string color;
    public:
    void nhapkho()
    {
        Printer::nhapkho();
        cout << "\nNhap mau: "; fflush(stdin); getline(cin, this->color);
    }
    void xuatkho()
    {
        Printer::xuatkho();
        cout << "\nMau: " << this->color;
    }
};

class Colorlaser : public Laser , ColorPrinter
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
    for (int i = 0; i < n, i++)
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
        cout << "\n\t1. Nhap danh sach may in: ";
        cout << "\n\t2. Xuat danh sach may in: ";
        cout << "\n\t3. Thoat."
    }
    
}

int main()
{   
    
}


