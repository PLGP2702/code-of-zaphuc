#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int tong = a + b;
    int hieu = a - b;
    int tich = a * b;
    int thuong = (float)a / b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << endl;
    return 0;
}