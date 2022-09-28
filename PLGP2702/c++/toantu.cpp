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
    //--------------------------------- toan tu 
    /*
    int a = 500, b = 200; 
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    float thuong = (float)a / b;
    int du = a % b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << " " << du << endl;
    */
    //--------------------- tang truoc ++a 101 101, tang sau a++ 101 100
    /*
    int a = 100; 
    int b = a--;
    cout << a << " " << b << endl;
    */
    /*
    int a = 100, b = 200;
    //a += b 
    a = a + b;
    //a -= b
    a = a - b;
    //a *= b 
    a = a * b;
    //a /= b  
    a = a / b;
    // a %= b
    a = a % b;
    */
    //---------------------------------toan tu so sanh
    // toan_hang1 toantusosanh toan_hang2 => true, false
    /*
    int a = 100, b = 200;
    bool ok = a != b;
    cout << ok << endl;
    */
    int a = 100, b = 200, c = 300, d = 400, e = 200;
    int res = ( a <= b ) && ( c <= d );
    int res1 = ( a >= b ) && ( c <= d );
    int res2 = (a == b ) || ( c > d );
    int res3 = ( a < b ) || ( c <= d ) || ( b > c ) || ( a > e );
    int res4 = !( a < b );
    int res5 = !( a == e );  
    cout << res << " "<< res1 << " " << res2 << " " << res3 << " " << res4 << " " << res5 << endl;
    return 1;
}
// assignment operator: toan tu gan 
// toan tu toan hoc: +, -, *, /, %, ++, --
//toan tu so sanh: >, <, >=, <=, ==, !=
//logical: AND , OR , NOT
// and : &&
// or : ||
// not : !