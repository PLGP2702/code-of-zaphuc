#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> A[i];
    }

    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 3 == 0) {
            tong += A[i];
        }
    }

    cout << "Tong cac phan tu chia het cho 3 trong mang la: " << tong << endl;

    return 0;
}




