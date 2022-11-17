#include <bits/stdc++.h>
using namespace std;

class Nguoi
{
    private:
        string HoDem;
        string NgaySinh;
        string Ten;
    public:
        Nguoi()
        {
            this->HoDem = this->NgaySinh = this->Ten ="";
        }
        Nguoi(string HoDem, string NgaySinh, string Ten)
        {
            this-> HoDem = HoDem;
            this-> NgaySinh = NgaySinh;
            this-> Ten = Ten;
        }
        ~Nguoi()
        {
            this->HoDem = this->NgaySinh = this->Ten ="";
        }
        friend istream &operator>>(istream &is, Nguoi &obj)
        {
            
        }
};