#include <bits/stdc++.h>
using namespace std;

void Xinchao()
{
    cout << "hello Phuc\n";
}

void Thamso(int a, int b , float c)
{
    cout << a << " " << b << " " << c << endl;
    cout << "\nTong: " << a + b + c;
    cout << "\nHieu: "<< c - b - a;
}

void Tang(int n)
{
    n += 100;
}

//S = 1 + 2 + 3 + 4 + ..... +n 
int Tong(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    // int n;
    // cout << "Nhap vao so lan muon in ra: ";
    // cin >> n;
    // for (int i = 0; i <= n; i++)
    // {
    //     Xinchao();
    // }

    //Thamso(100, 200, 300); //goi ham

    //float n = 10, m = 20, l = 30.5;
    //Thamso(n, m, l);
    
    //int a = 1000;
    //Tang(a);
    //cout << a << endl;

    int a = 10;
    cout << Tong(a) << endl;
    return 0;
}