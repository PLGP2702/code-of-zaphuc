#include <bits/stdc++.h>

using namespace std;

class MyAttr
{
    private:
        int sohieu;
    public:
        MyAttr(int SH = 0)
        {
            sohieu = SH;       
        }
        void display()
        {
            cout << "\n So hieu cua tep la: " << sohieu;
        }
};

class Mydate
{
    private:
        int ngay, thang, nam;
    public:
        Mydate(int ngay = 1, int thang = 1, int nam = 1980)
        {
            ngay = ngay;
            thang = thang;
            nam = nam;
        }
        void in()
        {
            cout << ngay << "-" << thang << "-" << nam;
        }
        int operator > (Mydate &a)
        {
            if(nam > a . nam)
                return 1;
            if((nam == a . nam) && (thang > a . thang))
                return 1;
            if((nam == a.nam) && (thang > a.thang) && (ngay > a.ngay))
            {
                return 1;
            }
            else 
                return 0;
        }
};

