#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    /*//tính tổng hiệu tích thương-----------------------------
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    long long tich = 1ll * a * b;
    int thuong = (float)a / b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << endl;
    */
    /* //chu vi, dien tich hinh tron------------------------------
    int r;
    cout << "nhap r: ";
    cin >> r;
    double chuvi = 2 * 3.14 * r;
    double dientich = 3.14 * r * r;
    cout << "chu vi hinh tron la: " <<chuvi<< "\ndien tich hinh tron la: " <<dientich<< endl;
    */
    /* //tính khoảng cách--------------------------------------
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dis = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    cout << fixed << setprecision(2) << dis << endl;
    */
    /* //chuyen don vi do c -> f 
    int c;
    cin >> c; 
    double F = (float)c * 9 / 5 + 32;
    cout << fixed << setprecision(2)<< F << endl;
    */
    // tri tuyet doi 
    int d; cin >> d;
    double ttd = sqrt(d);
    cout << fixed << setprecision(2) << endl;
    // can bac hai
    int n; cin >> n;
    double can = sqrt(n);
    cout << fixed << setprecision(2) << can << endl;
    // số mũ 
    int a ,b;
    cin >> a >> b;
    double somu = pow(a,b);
    cout << fixed << setprecision(2) << somu << endl;
    return 0;
}