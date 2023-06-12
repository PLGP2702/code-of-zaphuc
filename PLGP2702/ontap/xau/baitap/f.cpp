#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cout << "Nhap vao mot xau: ";
    getline(cin, s);

    int n = s.length();
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            cout << endl; // Xuất một dòng mới
        } else {
            cout << s[i];
        }
    }

    return 0;
}