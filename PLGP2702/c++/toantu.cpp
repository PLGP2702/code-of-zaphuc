#include <iostream>

using namespace std;

int main(){
    /* các kiểu dữ liệu-----------------------
    int a = 100; 
    long long b = 200;
    float c = 2.50;
    double d = 3.873483;
    char kitu = 'r';
    bool ok = true;
    */
    /* nhập xuất dữ liệu -----------------------
    int a; 
    cout << "xinchao !\n";
    cin >> a;
    cout << a << endl;
    */
   //toán tử gán --------------------- assigment operator
    /*
    int a, b, c;
	cin >> a;
	b = a; 
	cout  << b << endl;
    c = b;
    cout << c << endl;
    */
    //--------------------------------- phep' toan
    int a = 500, b = 200; 
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    int thuong = a / b;
    int du = a % b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << " " << du << endl;
    return 0;
}