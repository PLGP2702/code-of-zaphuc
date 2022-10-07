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
    /* //tính tổng 1----------------------------------
    int n;
    cin >> n; 
    long long s = 1ll * n * (n+1) / 2;
    cout << s << endl;
    */ 
    /* //tính tổng 2---------------------------------
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
    /* //tính tổng 5----------------------------------
    long long n; cin >> n;
    if(n % 2 == 0){                                                                                
        cout << n / 2 << endl;
    }
    else{
        cout << (-n - 1) / 2 << endl;
    }
    */
    /* //so chia het lon nhat----------------------------
    int a ,b;
    cin >> a >> b;
    cout << a / b * b << endl;
    */
    /* //so chia het nho nhat-----------------------------
    int a, b;
    cin >> a >> b;
    cout << (a + b - 1) / b * b<< endl;
    */
    /* //kiem tra tinh chan le----------------------------
    long long n;
    cin >> n;
    if(n % 2 == 0){
        cout << 0 << endl;
    }
    else{
        cout << 1 << endl;
    }
    */
    /* //kiem tra so chia het cho 3 va 5---------------------
    long long n;
    cin >> n;
    if((n % 3 == 0) || (n % 5 == 0)){ // de y ||(hoac), &&(va)
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    */
    /* //kiem tra nam nhuan--------------------------------
    int n;
    cin >> n;
    if(n <= 0){
        cout << " INVALID\n";
    }
    else{
        if((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))){
            cout << "Yes\n";
        }
        else cout << "NO\n";
    }
    */
    /* //in ra so ngay cua thang----------------------------
    int t, n; 
    cin >> t >> n;
    if(t <= 0 || t > 12 || n <= 0){
        cout << "INVALID\n";
    }
    else{
        if(t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12 ){
            cout << "  thang co 31 ngay\n";
        }
        else if(t == 4 || t == 6 || t == 9 || t == 11){
            cout <<"   thang co 30 ngay\n";
        }
        else{
            if((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0))){
                cout <<"29";
            }
            else{
                cout <<"28";
            }
        }
    }
    */
    /* //kiem tra chu in hoa,thuong-------------------------------
    // a - z : 97 - 122
    // A - Z : 65 - 90
    // 0 - 9 : 48 - 57
    char c; cin >> c;
    cout << (int)c << endl;
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    */
    /* //kiem tra chu so-------------------------------------------
    char c; cin >> c;
    cout << (int)c << endl;
    if(c >= '0' && c <= 9){
        cout << "yes";
    }
    else{
        cout << "no";
    }
    */
    /* //chuyển kí tự hoa thành kí tự thường--------------------------
    char c; cin >> c;
    if(c >= 'A' && c <= 'Z'){
        c += 32; //thuong thanh hoa ( - )
    }
    cout << c << endl;
    */
    /* //chữ cái kế tiếp--------------------------------------------
    char c; 
    cin >> c;
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        if(c == 'z' || c == 'Z'){
            cout << "a\n";
        }
        else{
            if(c >= 'A' && c < 'Z'){
                c += 32;
            }
            ++c;
            cout << c << endl;
        }
    }
    else{
        cout << "INVALID\n";
    }
    */
    /* //số lớn số nhỏ----------------------------------------------                                                                                             
    int a, b, c;
    cin >> a >> b >> c;
    // int max, min;
    // if(a > b && a > c){
    //     max = a; 
    // }
    // else if(b > a && b > c)
    //     max = b;
    // else
    //     max = c;
    // if(a < b && a < c){
    //     min = a;
    // }
    // else if(b < a && b < c){
    //     min = b;
    // }
    // else
    //     min = c;
    /* // cout << max << " " << min << endl;
    int min = a, max = a; 
    if(b < min) min = b;
    if(c < min) min = c;
    if(b > max) max = b;
    if(c > max) max = c;
    cout << max <<" "<< min << endl;
    */
    int a, b, c;
    cin >> a >> b >> c;
    if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
        //kiem tra xem tam giac do la tam giac gi
        if(a == b && a == c){
            cout << 1 << endl;
        }
        else if(a == b || a == c || b == c){
            if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
                cout << 4 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
        else if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
            cout << 3 << endl;
        }
        else{
            cout << 5 << endl;
        }
    }
    else
        cout <<"INVALID";
    return 0;
}