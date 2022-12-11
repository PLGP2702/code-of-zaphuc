#include <bits/stdc++.h>
using namespace std;

//kieu tra ve, danh sach tham so
//thu tu va kieu du lieu cua danh sach tham so la quan trong
//Muon thay doi gia tri cua doi so sau khi ham ket thuc => truyen tham chieu &
// 

//khai bao profile
bool Nguyento(int);
bool Check(int);

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

//S = 1/1  + 1/2 + 1/3 + 1/4 + ... +n
float Tong1(int)
{
    int n;
    float res = 0;
    for (int i = 0; i <= n; i++)
    {
        res += 1.0 / i;
    }  
    return res;
}

//Xay dung ham kiem tra so nguyen to, tham so int
//True, False
bool Nguyento(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return  n > 1;
}

//kiem tra xem tong chu so cua 1 so co phai la so nguyen to hay ko
bool Check(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    if(Nguyento(sum))
        return true;
    else
    {
        return false;
    }
}

int Tang1(int &n)
{
    ++n;
}

//function overloading
int Tong3(int a, int b)
{
    return a + b;
}

float Tong3(float a, float b)
{
    return a + b;
}

long long Tong3(long long a, long long b)
{
    return a + b;
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

    //cout << Tong(10) << endl;

    // for (int i = 1; i <= 100; i++)
    // {
    //     if(nguyento(i))
    //     {
    //         cout << i << endl;
    //     }
    // }
    
    // int n = 357;
    // int sum = Check(n);
    // if(Nguyento(Check(n)))
    // {
    //     cout << "1\n";
    // }
    // else{
    //     cout << "0\n";
    // }

    // int a = 124;
    // Tang1(a);
    // cout << a << endl;

    // long long n = 100.1, m = 200.2;
    // cout << Tong3(n ,m) << endl;
    return 0;
}