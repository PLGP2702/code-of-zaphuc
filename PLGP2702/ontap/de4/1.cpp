#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i += 2) {
        if (a[i] % 2 != 0) {
            count++;
        }
    }   

    cout << "So phan tu le o vi tri chan la: " << count << endl;

    return 0;
}