#include <bits/stdc++.h>

using namespace std;

void Xinchao()
{
    cout << "\nHello Seis";
}

void Thamso(int a, int b, float c)
{
    cout << a << " " << b << " " << c << endl;
    cout << "\nTong : " << a + b + c;
    cout << "\nHieu :" << a - b - c;
}

void Tang(int n)
{
    n += 100;
}

int Tong(int n)
{   
    return n * (n + 1) / 2;
}

float Tong1(int n)
{
    float res  = 0; 
    for (int i = 0; i <= n; i++)
    {
        res += 1.0 / i;
    }
    return res;
}

bool Nguyento(int n)
{
    for (int i = 0; i <= sqrt(n); i++)
    {
        if(n % i ==0)
        {
            return false;
        }
    }
    return  n > 1;
}

int main()
{   
    // int n;
    // cout << "\nNhap vao so lan muon in ra: ";
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     Xinchao();
    // }

    // Thamso(100 ,200 ,300);

    // int a = 1000;
    // Tang(a);
    // cout << a << endl;

    for (int i = 1; i <= 100; i++)
    {
        if(Nguyento(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}