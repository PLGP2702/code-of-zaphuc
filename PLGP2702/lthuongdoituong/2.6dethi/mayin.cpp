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

class Laser : public Printer{
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

class ColorPrinter : Printer{
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

int main()
{

}


