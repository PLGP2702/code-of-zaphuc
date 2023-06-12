#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    // Tach cac tu trong xau s va luu vao mang cac chuoi
    string arr[100]; // mang cac chuoi
    int n = 0; // so luong tu trong xau
    string word = "";
    for (char c : s) {
        if (c == ' ') { // gap khoang trang, tach tu
            if (word.length() > 0) { // kiem tra xem co tu nao dang duoc tao khong
                arr[n++] = word; // luu tu vao mang cac chuoi
                word = ""; // reset word
            }
        } else { // them ky tu vao tu dang tao
            word += c;
        }
    }
    if (word.length() > 0) { // kiem tra xem co tu nao dang duoc tao khong
        arr[n++] = word; // luu tu vao mang cac chuoi
    }

    // Xuat cac tu theo thu tu nguoc lai
    reverse(arr, arr + n); // dao nguoc mang cac chuoi
    cout << "Cac tu cua xau theo thu tu nguoc lai la:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}