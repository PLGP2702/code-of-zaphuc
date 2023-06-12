#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t, n;
   cout << "Nhap nam: ";
   cin >> n;
   cout << "Nhap thang: ";
   cin >> t;
    if(t <= 0 || t > 12 || n <= 0)
    {
        cout << "INVAILD\n";
    }
    else
    {
        if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
        {
            cout << "Thang co 31 ngay\n";
        }
        else if(t == 4 || t == 6 || t == 9 || t == 11)
        {
            cout << " Thang co 30 ngay\n";
        }
        else
        {
            if((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
            {
                cout << "29";
            }
            else
            {
                cout << "28";
            }
        }
    }
}