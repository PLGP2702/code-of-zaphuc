#include <iostream>
#include <iomanip>

// int main() {
//     cout << "Hello world!" << endl;
//     return 0;
// }
using namespace std;
int main(){ 
    cout << sizeof(bool) << endl;
    cout << INT_MIN << " " << INT_MAX << endl;
    cout << LLONG_MIN << " " << LLONG_MAX << endl; 
    /* //in ra man hinh
    int bankinh;
    cout << bankinh << endl;
    cout << "xin chao" << endl;
    */
    /* //kieu long long
    long long a, b, c;
    cin >> a >> b >> c;
    cout << "gia tri la: " << a << endl;
    cout << "gia tri la: " << b << endl;
    cout << "gia tri la: " << c << endl;
    */
    /* //kieu float
    float a; 
    cin >> a;
    cout << fixed << setprecision(10) << a << endl;
    */
    /* //kitu
    char kitu;
    cin >> kitu;
    cout << kitu << endl;
    */
    /* //dung sai
    bool ok = true, oke = false;
    cout << ok << endl;
    cout << oke << endl;
    */
    /*
    int a;
    cout << "Nhap gia tri cho a: ";
    cin >> a;
    cout << "Gia tri cua a la: " << a << endl;
    */
    return 0;
}

//kieudulieu:
//-so nguyen: int, long long

//-so thuc: float, double

//-kí tự: char - 1byte: 256 kí tự 0 - 256

//-bool: true, false

/*bien:
Kieu_du_lieu ten_bien;
int bankink; float Bankinh; double chuvi;
- không dược bắt đầu bằng chữ số 
- không được có dấu cách 
- không được trung với các keyword
*/