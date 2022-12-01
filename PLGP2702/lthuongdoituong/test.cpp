#include <bits/stdc++.h>

using namespace std;

class Complex
{
    private:
        float ao, thuc;
    public:
    //
    Complex()
    {
        thuc = 0;
        ao = 0;
    }
    //
    Complex(float a, float b)
    {
        thuc = a;
        ao = b;
    }
    //
    void nhap()
    {
        cout << "\nNhap phan thuc: "; cin >> thuc;
        cout << "\nNhap phan ao: "; cin >> ao;
    };
    //
    void xuat()
    {
        if(ao > 0)
            cout << thuc << "+i" << ao;
        else if(ao == 1)
            cout << thuc << "+i";
        else if(ao == -1)
            cout << thuc << "-i";
        else if(ao == 0)
        {
            cout << thuc;
        }
        else
            cout << thuc << ao << "i";
    };
    //
    void setthuc(float a)
    {
        thuc = a;
    }
    //
    float getthuc()
    {
        return thuc;
    }
    //
    void setao(float b)
    {
        ao = b;
    }
    //
    float getao(float b)
    {
        return ao;
    }
    //
    void Cong(Complex a, Complex b)
    {
        thuc = a.thuc + b.thuc;
        ao = a.ao + b.ao;
    };
    //
    void Tru(Complex a, Complex b)
    {
        thuc = a.thuc - b.thuc;
        ao = a.ao - b.ao;
    };
    //
    void Nhan(Complex a, Complex b)
    {
        thuc = a.thuc * b.thuc - a.ao * b.ao;
        ao = a.thuc * b.ao + a.ao * b.thuc;
    };
    //
    void Chia(Complex a, Complex b)
    {
        thuc = (a.thuc * b.thuc + a.ao * b.ao) / (a.ao * b.ao + a.thuc * b.thuc);
        ao = (a.ao * b.thuc - a.thuc * b.ao) / (b.thuc * b.thuc - b.ao * b.ao);
    };
};

int main()
{
    Complex a, b, c;
    a.nhap();
    b.nhap();
    c.Cong(a, b);
    cout << "========TONG========";
    cout << "\nTong cua hai so thuc: "; c.xuat();
    c.Tru(a, b);
    cout << "\n========HIEU========";
    cout << "\nHieu cua hai so thuc: "; c.xuat();
    c.Nhan(a, b);
    cout << "\n========TICH========";
    cout << "\nTich cua hai so thuc: "; c.xuat();
    c.Chia(a, b);
    cout << "\n========THUONG========";
    cout << "\nThuong cua hai so thuc: "; c.xuat();
    return 0;
};
