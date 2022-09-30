#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    /* //tính tổng hiệu tích thương-----------------------------
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
    /* //abs, sqrt, pow------------------------------------------------
    // tri tuyet doi 
    int d; cin >> d;
    double ttd = abs(d);
    cout << fixed << setprecision(2) << ttd << endl;
    // can bac hai
    int n; cin >> n;
    double can = sqrt(n);
    cout << fixed << setprecision(2) << can << endl;
    // số mũ 
    int a ,b;
    cin >> a >> b;
    double somu = pow(a,b);
    cout << fixed << setprecision(2) << somu << endl;
    */
    /* //tinh tổng 1---------------------------------
    int n;
    cin >> n; 
    long long s = 1ll * n * (n+1) / 2;
    cout << s << endl;
    */ 
    /* // tính tổng 2---------------------------------
    int n;
    cin >> n;
    long long res = 1ll * n *(n+1) * (2*n+1) / 6;
    cout << res << endl;
    */
    /* //tính tổng 3----------------------------------
    int n; cin >> n;
    double res = 1 - 1.0 / (n+1);
    cout << fixed << setprecision(2) << res << endl;
    */
    /* //tính tổng 4----------------------------------
    int n; 
    cin >> n;
    long long res = 1ll * n * (n+1);
    cout << res << endl;
    */
    
    return 0;
}