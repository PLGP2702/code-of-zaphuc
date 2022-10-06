#include <iostream>
#include <bits/stdc++.h>
    
using namespace std;
     
    class Sophuc{
    private:
        float thuc, ao;
    public:
    complex()
    {
        thuc=0;
        ao=0;
    }
    Complex(float a, float b)
    {
        thuc=a;
        ao=b;
    }
    
        void nhap() {
            cout << "Nhap phan thuc: "; cin >> thuc;
            cout << "Nhap phan ao: "; cin >> ao;    
        };
    
        void xuat() {
            if(ao >0) 
                cout << thuc << "+i" << ao;
            else if(ao == 1)
                cout << thuc << "+i";
            else if(ao == -1)
                cout << thuc << "-i";
            else if(ao == 0){
                cout << thuc;
            }
            else
                cout << thuc << ao << "i";
        };
    
        void cong(Sophuc a, Sophuc b) {
            thuc = a.thuc + b.thuc;
            ao = a.ao + b.ao;
        };
    
        void tru(Sophuc a, Sophuc b) {
            thuc = a.thuc - b.thuc;
            ao = a.ao - b.ao;   
        };
    
        void nhan(Sophuc a, Sophuc b) {
            thuc = a.thuc * b.thuc - a.ao * b.ao;
            ao = a.thuc * b.ao + a.ao * b.thuc;
        };
    
        // void chia(Sophuc a, Sophuc b) {
        //     thuc = (a.thuc * b.thuc + a.ao * b.ao) / (b.ao * b.ao + b.thuc * b.thuc);
        //     ao = (a.ao * b.thuc - a.thuc * b.ao) / (b.thuc * b.thuc + b.ao * b.ao);
        // };
    };
    
    int main()
    {
        Sophuc a,b,c;
        a.nhap();
        b.nhap();
        c.cong(a,b);
        cout << "Tong cua 2 so phuc: "; c.xuat();
        c.tru(a,b);
        cout << "\nHieu cua 2 so phuc: "; c.xuat();
        c.nhan(a,b);
        cout << "\nTich cua 2 so phuc: "; c.xuat();
        // c.chia(a,b);
        // cout << "\nThuong cua 2 so phuc: "; c.xuat();
        return 0;
    }
    
