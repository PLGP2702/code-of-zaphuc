#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cout << "Nhap vao mot xau s: ";
    getline(cin, s);

    int n = s.length();
    for (int i = 0; i < n; i++) {
        s[i] = toupper(s[i]);
    }

    cout << "Xau s sau khi chuyen thanh in hoa: " << s << endl;

    return 0;
}
