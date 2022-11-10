#include <iostream>
using namespace std;

class MyDate
{
    private:
    int Ngay;
    int Thang;
    int Nam;
    public:
    MyDate()
    {
        this->Ngay = this->Thang = this->Nam = 0;
    }

    friend istream &operator>>(istream &is, MyDate &ntn)
    {
        cout << "Ngay: "; is >> ntn.Ngay;
        cout << "Thang: "; is >> ntn.Thang;
        cout << "Nam: "; is >> ntn.Nam;
        return is;
    }

    friend ostream &operator>>(ostream &os, MyDate &ntn)
    {
        cout << "Ngay: "; os >> ntn.Ngay;
        cout << "Thang: "; os >> ntn.Thang;
        cout << "Nam: "; os >> ntn.Nam;
        return os;
    }

    void kiemtra(MyDate &ntn)
    {
        if (ntn.Ngay > 0 && ntn.day < 32 && ntn.Thang > 0 && ntn.Thang < 13 && ntn.Nam > 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void tang(MyDate %ntn)
    {
        int n;
        cout << "Nhap ngay can tang: "; cin >> n;
        while (n > 0)
        {
            Ngay+=n;
            if(day > 31)
            {
                day -= 30;
                Thang++;
            }
            else if(Thang > 12)
            {
                Thang -= 11;
                Nam++;
            }
        }       
    }
    
    MyDate operator = (const MyDate &ntn)
    {
        Ngay = ntn.Ngay;
        Thang = ntn.Thang;
        Nam = ntn.Nam;
    }
};