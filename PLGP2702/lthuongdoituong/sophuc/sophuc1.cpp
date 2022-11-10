#include <iostream>
using namespace std;
  
class Complex 
{
private:
    float a, b;
public:
    Complex()
    {
        a = b = 0;
    }
    Complex(int a, int b)
    {
        this-> a = a;
        this-> b = b;
    }
	friend istream & operator>>(istream &is, Complex &c)
    {
		cout << "Nhap phan thuc: ";
		is >> c.a;
		cout << "Nhap phan ao: "; 
		is >> c.b;
		return is;
	}

	friend ostream &operator<<(ostream &os, Complex &c)
    {
		if(c.a == 0){
			os << c.b << "i";
		}
		else if(c.b>1){
			os << c.a << "+" << c.b << "i";
		}
		else if(c.b == 0){
			os << c.a;
		}
		else if(c.b == 1){
			os << c.a << "+" << "i";
		}
		else if(c.b == -1){
			os << c.a << "-" << "i";
		}
		return os;
	}

	Complex operator+(const Complex &c) const
    {
		Complex temp;
		temp.a = a + c . a;
		temp.b = b + c . b;
		return temp;
	}
	Complex operator-(const Complex &c) const
    {
		Complex temp;
		temp.a = a - c . a;
		temp.b = b - c . b;
		return temp;
	}
    Complex operator=(const Complex &C)
    {
        a = C . a;
        b = C . b;
    }
};

int main()
{
    Complex x,y,z;
    cin>>x;
    cin>>y;
    z=x+y;
    cout<<"Tong 2 so phuc: "<<z<<endl;
    z=x-y;
    cout<<"Hieu 2 so phuc: "<<z<<endl;
    
    int n;
    cout << "Nhap n so phuc: "; cin >> n;
    Complex*arr=new Complex[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    Complex c;
    for(int i=0; i<n; i++)
    {
        c = c + arr[i];
    }
    cout << "Tong so phuc la: "<< c <<endl;
}