#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    double A[n];
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    double tong = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            tong += A[i];
        }
    }

    cout << "Tong cac phan tu o vi tri chia het cho 3 trong mang la: " << tong << endl;

    return 0;
}